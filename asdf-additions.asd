;; -*- Mode: Lisp; Syntax: ANSI-Common-Lisp -*-

(in-package #:common-lisp-user)

(defpackage #:asdf-additions-system
  (:use #:common-lisp))

(in-package #:asdf-additions-system)

(asdf:defsystem asdf-additions
  :description "A few new filetypes added to ASDF."
  :author "Dan Barlow <dan@metacircles.com>, Stelian Ionescu <sionescu@common-lisp.net>"
  :maintainer "Stelian Ionescu <sionescu@common-lisp.net>"
  :version "0.5.1"
  :licence "MIT"
  :depends-on (:cffi)
  :components ((:file "pkgdcl")
               (:file "unix-dso" :depends-on ("pkgdcl"))
               (:file "muffled-source-file" :depends-on ("pkgdcl"))))
