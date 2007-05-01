(in-package :asdf)

;;;;;;;;;;;;;;;;
;;; UTILITIES ;;
;;;;;;;;;;;;;;;;

(cffi:defcfun getenv :string (name :string))

(defun join (connector strings)
  (concatenate 'string (car strings)
               (reduce #'(lambda (str1 str2)
                           (concatenate 'string str1 connector str2))
                       (cdr strings)
                       :initial-value "")))

(defun space-join (&rest strings)
  (join " " strings))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; MACHINE-DEPENDENT PARAMETERS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;; FIXME: I'm not sure that this is correct. Must find a reliable
;;        way to find out whether the compiler is 32-bit or 64-bit
(defun gcc-cpu-flags ()
  (case (cffi:foreign-type-size :int)
    (4 "-m32")
    (8 "-m64")
    (t (error "The size of INT on your platform is neither 32-bit nor 64-bit.
This is probably a programmer's error. Please contact the developers."))))


;;;;;;;;;;;;;;;
;;; UNIX-DSO ;;
;;;;;;;;;;;;;;;

;;; we also have a shared library with some .o files in it
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

(defmethod perform ((operation compile-op) (dso unix-dso))
  (let ((dso-name (unix-name (car (output-files operation dso)))))
    (unless
        (zerop
         (run-shell-command
          (space-join (or (getenv "CC") "gcc")
                      "~A -o ~S ~{~S ~}")
          (space-join (unix-dso-link-flags dso)
                      (gcc-cpu-flags)
                      (getenv "EXTRA_LDFLAGS")
                      #+sunos "-shared -lresolv -lsocket -lnsl"
                      #+darwin "-bundle"
                      #-(or darwin sunos) "-shared")
          dso-name
          (mapcar #'unix-name
                  (mapcan (lambda (c)
                            (output-files operation c))
                          (module-components dso)))))
      (error 'operation-error :operation operation :component dso))))
  
(defmethod perform ((o load-op) (c unix-dso))
  (let ((co (make-instance 'compile-op)))
    (let ((filename (car (output-files co c))))
      (cffi:load-foreign-library filename)
      (terpri *debug-io*)
      (format *debug-io* "~%>> Loaded ~A~%~%" filename))))


;;;;;;;;;;;;;;;;;;;;
;;; C-SOURCE-FILE ;;
;;;;;;;;;;;;;;;;;;;;

;;; if this goes into the standard asdf, it could reasonably be extended
;;; to allow cflags to be set somehow
(defmethod output-files ((op compile-op) (c c-source-file))
  (list
   (make-pathname :type "o" :defaults
		  (component-pathname c))))

(defmethod perform ((op compile-op) (c c-source-file))
  (unless
      (zerop
       (run-shell-command (space-join (or (getenv "CC") "gcc")
                                      "~A -o ~S -c ~S")
                          (space-join "-O3 -Wall -fPIC"
                                      (gcc-cpu-flags)
                                      (getenv "EXTRA_CFLAGS"))
                          (unix-name (car (output-files op c)))
                          (unix-name (component-pathname c))))
    (error 'operation-error :operation op :component c)))

(defmethod perform ((operation load-op) (c c-source-file))
  t)
