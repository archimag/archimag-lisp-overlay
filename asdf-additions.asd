;; -*- Mode: Lisp; Syntax: ANSI-Common-Lisp -*-

(in-package #:cl-user)

(defpackage #:asdf-additions-system
  (:use #:common-lisp #:asdf))

(in-package #:asdf-additions-system)

(defsystem asdf-additions
  :description "A few new filetypes added to ASDF."
  :author "Christophe Rhodes <csr21@cantab.net>"
  :maintainer "Stelian Ionescu <sionescu@common-lisp.net>"
  :licence "MIT"
  :components ((:file "unix-dso")))
