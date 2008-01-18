;;; site-lisp configuration for slime

(require 'cl)

(add-to-list 'load-path "@SITELISP@")
(add-to-list 'load-path "@SITELISP@/contrib")
(autoload 'slime-highlight-edits-mode "slime-highlight-edits")

(require 'slime)

(destructuring-bind (day month year &rest rest)
    (cdddr (parse-time-string slime-protocol-version))
  (if (> year 2007)
      ;; Loading a default set of contribs for post-split SLIME:
      ;; pretty much what got loaded by default before the split
      (slime-setup '(slime-fancy slime-asdf slime-banner))
    ;; Pre-split SLIME
    (slime-setup)))

;; this prevents us from requiring the user get dev-lisp/hyperspec
;; (which is non-free) as a hard dependency

(if (file-exists-p "/usr/share/doc/hyperspec/HyperSpec")
    (setq common-lisp-hyperspec-root "file:///usr/share/doc/hyperspec/HyperSpec/")
  (setq common-lisp-hyperspec-root "http://www.lispworks.com/reference/HyperSpec/"))
