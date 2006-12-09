;; -*- Mode: Lisp; Syntax: ANSI-Common-Lisp -*-

(in-package #:common-lisp-user)

(defpackage #:asdf-additions-system
  (:use #:common-lisp #:asdf))

(in-package #:asdf-additions-system)

(defsystem asdf-additions
  :description "A few new filetypes added to ASDF."
  :author "Dan Barlow <dan@metacircles.com>, Stelian Ionescu <sionescu@common-lisp.net>"
  :maintainer "Stelian Ionescu <sionescu@common-lisp.net>"
  :licence "MIT"
  :depends-on (:cffi)
  :components ((:file "unix-dso")
               #+sbcl (:file "muffled-source-file")))
