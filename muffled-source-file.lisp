(in-package :asdf-additions)

(defclass muffled-source-file (cl-source-file) ())

(defmethod perform :around ((o compile-op) (s muffled-source-file))
  ;; shut up already.  Correctness first.
  #+sbcl
  (handler-bind ((sb-ext:compiler-note #'muffle-warning))
    (let ((*compile-print* nil))
      (call-next-method)))
  #+cmu
  (handler-bind ((kernel:simple-style-warning #'muffle-warning))
    (let ((*compile-print* nil)
          (ext:*gc-verbose* nil))
      (call-next-method)))
  #-(or sbcl cmu)
  (let ((*compile-print* nil))
    (call-next-method)))
