(in-package :asdf-additions)

;;;;;;;;;;;;;;;;
;;; UTILITIES ;;
;;;;;;;;;;;;;;;;

(defun getenv (var)
  #+(or allegro clisp) (sys::getenv var)
  #+(or cmu scl) (cdr (assoc var ext:*environment-list* :test #'string-equal))
  #+(or ecl gcl) (si:getenv var)
  #+lisworks (lw:environment-variable var)
  #+lucid (lcl:environment-variable var)
  #+mcl (ccl::getenv var)
  #+sbcl (sb-ext:posix-getenv var)
  #-(or allegro clisp cmu scl ecl gcl lisworks lucid mcl sbcl)
  (error "Your implementation is not supported"))

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
(defclass unix-dso (asdf:module)
  ((link-flags :initarg :link-flags :initform ""
               :reader unix-dso-link-flags)))

(defun unix-name (pathname)
  (namestring 
   (typecase pathname
     (logical-pathname (translate-logical-pathname pathname))
     (t pathname))))

(defmethod asdf:input-files ((operation asdf:compile-op) (dso unix-dso))
  (mapcar #'asdf:component-pathname (asdf:module-components dso)))

(defmethod asdf:output-files ((operation asdf:compile-op) (dso unix-dso))
  (let ((dir (asdf:component-pathname dso)))
    (list
     (make-pathname :type "so"
		    :name (car (last (pathname-directory dir)))
		    :directory (butlast (pathname-directory dir))
		    :defaults dir))))

(defmethod asdf:perform ((operation asdf:compile-op) (dso unix-dso))
  (let ((dso-name (unix-name (car (asdf:output-files operation dso)))))
    (unless
        (zerop
         (asdf:run-shell-command
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
                            (asdf:output-files operation c))
                          (asdf:module-components dso)))))
      (error 'asdf:operation-error :operation operation :component dso))))
  
(defmethod asdf:perform ((o asdf:load-op) (c unix-dso))
  (let ((co (make-instance 'asdf:compile-op)))
    (let ((filename (car (asdf:output-files co c))))
      (cffi:load-foreign-library filename)
      (terpri *debug-io*)
      (format *debug-io* "~%>> Loaded ~A~%~%" filename))))


;;;;;;;;;;;;;;;;;;;;
;;; C-SOURCE-FILE ;;
;;;;;;;;;;;;;;;;;;;;

;;; if this goes into the standard asdf, it could reasonably be extended
;;; to allow cflags to be set somehow
(defmethod asdf:output-files ((op asdf:compile-op) (c asdf:c-source-file))
  (list
   (make-pathname :type "o" :defaults
		  (asdf:component-pathname c))))

(defmethod asdf:perform ((op asdf:compile-op) (c asdf:c-source-file))
  (unless
      (zerop
       (asdf:run-shell-command
        (space-join (or (getenv "CC") "gcc")
                    "~A -o ~S -c ~S")
        (space-join "-O3 -Wall -fPIC"
                    (gcc-cpu-flags)
                    (getenv "EXTRA_CFLAGS"))
        (unix-name (car (asdf:output-files op c)))
        (unix-name (asdf:component-pathname c))))
    (error 'operation-error :operation op :component c)))

(defmethod asdf:perform ((operation asdf:load-op) (c asdf:c-source-file))
  t)
