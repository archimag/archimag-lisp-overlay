;;; -*- mode: lisp; syntax: common-lisp; package: common-lisp -*-

(defpackage #:swank-system
  (:use #:common-lisp #:asdf))

(defpackage #:swank-loader
  (:use #:common-lisp)
  (:export #:*source-directory*))

(in-package #:swank-system)

(defun load-user-init-file ()
  "Load the user init file, return NIL if it does not exist."
  (load (merge-pathnames (user-homedir-pathname)
			 (make-pathname :name ".swank" :type "lisp"))
	:if-does-not-exist nil))

(defun load-site-init-file ()
  (load (make-pathname :name "site-init" :type "lisp"
                       :defaults *load-truename*)
        :if-does-not-exist nil))

(defclass asdf::no-load-file (asdf:cl-source-file) ())

(defmethod asdf:perform ((op asdf:load-op) (c asdf::no-load-file)) nil)

(defmacro define-swank-system (&rest sysdep-components)
  `(defsystem swank
       :name "Swank is the Common Lips back-end to SLIME"
       :serial t
       :components ((:file "swank-backend")
                    (:file "nregex")
                    ,@(mapcar #'(lambda (component)
                                  (if (atom component)
                                      (list :file component)
                                      component))
                              sysdep-components)
                    (:file "swank")
                    (:module "contrib"
                     :components ((:no-load-file "swank-arglists")
                                  (:no-load-file "swank-asdf")
                                  (:no-load-file "swank-c-p-c")
                                  (:no-load-file "swank-fancy-inspector")
                                  (:no-load-file "swank-fuzzy")
                                  (:no-load-file "swank-indentation")
                                  (:no-load-file "swank-listener-hooks")
                                  (:no-load-file "swank-motd")
                                  (:no-load-file "swank-presentations")
                                  (:no-load-file "swank-presentation-streams"))))
       :depends-on (#+sbcl sb-bsd-sockets)
       :perform (load-op :after (op swank)
                  (load-site-init-file)
                  (load-user-init-file))))

#+sbcl  (define-swank-system
	  "swank-sbcl"
	  "swank-source-path-parser"
	  "swank-source-file-cache"
	  "swank-gray")

#+openmcl (define-swank-system
	    "metering"
	    "swank-openmcl"
	    "swank-gray")

#+cmu (define-swank-system
	"swank-source-path-parser"
	"swank-source-file-cache"
	"swank-cmucl")

#+clisp (define-swank-system
	  "xref"
	  "metering"
	  "swank-clisp"
	  "swank-gray")

#+armedbear (define-swank-system
		"swank-abcl")

#+ecl (define-swank-system
	  "swank-ecl" "swank-gray")

(in-package #:swank-loader)

(defparameter *source-directory*
  (asdf:component-pathname (asdf:find-system :swank)))

;; (funcall (intern (string :warn-unimplemented-interfaces) :swank-backend))

;; swank.asd ends here
