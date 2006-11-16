(in-package :asdf)

(defclass muffled-source-file (cl-source-file) ())

(defmethod perform :around ((o compile-op) (s muffled-source-file))
  ;; shut up already.  Correctness first.
  (handler-bind ((sb-ext:compiler-note #'muffle-warning))
    (let ((*compile-print* nil))
      (call-next-method))))
