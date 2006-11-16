(in-package :asdf)

;;; we also have a shared library with some .o files in it

(defclass unix-dso (module)
  ((compiler-flags :initarg :compiler-flags :initform ""
                   :reader unix-dso-compiler-flags)))
(defun unix-name (pathname)
  (namestring 
   (typecase pathname
     (logical-pathname (translate-logical-pathname pathname))
     (t pathname))))

(defmethod input-files ((operation compile-op) (dso unix-dso))
  (mapcar #'component-pathname (module-components dso)))

(defmethod output-files ((operation compile-op) (dso unix-dso))
  (let ((dir (component-pathname dso)))
    (list
     (make-pathname :type "so"
		    :name (car (last (pathname-directory dir)))
		    :directory (butlast (pathname-directory dir))
		    :defaults dir))))

(defmethod perform :after ((operation compile-op) (dso unix-dso))
  (let ((dso-name (unix-name (car (output-files operation dso)))))
    (if (zerop
         (run-shell-command
          "gcc ~A -o ~S ~{~S ~}"
          (concatenate 'string
                       (sb-ext:posix-getenv "EXTRA_LDFLAGS")
                       " "
                       (unix-dso-compiler-flags dso)
                       " "
                       #+sunos "-shared -lresolv -lsocket -lnsl"
                       #+darwin "-bundle"
                       #-(or darwin sunos) "-shared")
          dso-name
          (mapcar #'unix-name
                  (mapcan (lambda (c)
                            (output-files operation c))
                          (module-components dso)))))
        (sb-alien:load-shared-object dso-name)
      (error 'operation-error :operation operation :component dso))))

;;; if this goes into the standard asdf, it could reasonably be extended
;;; to allow cflags to be set somehow
(defmethod output-files ((op compile-op) (c c-source-file))
  (list 
   (make-pathname :type "o" :defaults
		  (component-pathname c))))
(defmethod perform ((op compile-op) (c c-source-file))
  (unless
      (= 0 (run-shell-command "gcc ~A -o ~S -c ~S"
			      (concatenate 'string
					   (sb-ext:posix-getenv "EXTRA_CFLAGS")
					   " -O3 -Wall -fPIC")
			      (unix-name (car (output-files op c)))
			      (unix-name (component-pathname c))))
    (error 'operation-error :operation op :component c)))

(defmethod perform ((operation load-op) (c c-source-file))
  t)
  
(defmethod perform ((o load-op) (c unix-dso))
  (let ((co (make-instance 'compile-op)))
    (let ((filename (car (output-files co c))))
      (sb-alien:load-shared-object filename))))
