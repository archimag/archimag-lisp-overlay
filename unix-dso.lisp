(in-package :asdf)

;;; we also have a shared library with some .o files in it

(cffi:defcfun getenv :string (name :string))

(defclass unix-dso (module)
  ((link-flags :initarg :link-flags :initform ""
               :reader unix-dso-link-flags)))

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
    (unless
        (zerop
         (run-shell-command
          (concatenate 'string
                       (or (getenv "CC")
                           "gcc")
                       " ~A -o ~S ~{~S ~}")
          (concatenate 'string
                       (unix-dso-link-flags dso)
                       " "
                       (getenv "EXTRA_LDFLAGS")
                       " "
                       #+sunos "-shared -lresolv -lsocket -lnsl"
                       #+darwin "-bundle"
                       #-(or darwin sunos) "-shared")
          dso-name
          (mapcar #'unix-name
                  (mapcan (lambda (c)
                            (output-files operation c))
                          (module-components dso)))))
      (error 'operation-error :operation operation :component dso))))

(defclass c-source-file (source-file)
  ((compile-flags :initarg :compile-flags :initform ""
                  :reader c-file-compile-flags)))

;;; if this goes into the standard asdf, it could reasonably be extended
;;; to allow cflags to be set somehow
(defmethod output-files ((op compile-op) (c c-source-file))
  (list 
   (make-pathname :type "o" :defaults
		  (component-pathname c))))

(defmethod perform ((op compile-op) (c c-source-file))
  (unless
      (zerop
       (run-shell-command (concatenate 'string
                                       (or (getenv "CC")
                                           "gcc")
                                       " ~A -o ~S -c ~S")
                          (concatenate 'string
                                       (c-file-compile-flags c)
                                       " "
                                       (getenv "EXTRA_CFLAGS")
                                       " -O3 -Wall -fPIC")
                          (unix-name (car (output-files op c)))
                          (unix-name (component-pathname c))))
    (error 'operation-error :operation op :component c)))

(defmethod perform ((operation load-op) (c c-source-file))
  t)
  
(defmethod perform ((o load-op) (c unix-dso))
  (let ((co (make-instance 'compile-op)))
    (let ((filename (car (output-files co c))))
      (cffi:load-foreign-library filename)
      (terpri)
      (format t "~%>> Loaded ~A~%~%" filename))))
