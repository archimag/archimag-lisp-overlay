(require (lib "43.ss" "srfi"))(require (lib "69.ss" "srfi"))(require (lib "process.ss"))
;(require-extension srfi-43)

;(use-modules (ice-9 srfi-43)(ice-9 syncase))

(define database (make-hash-table))

(define-syntax (define-implementation x)
  (syntax-case x ()
    ((_ implementation evaluate-command interpret-command compile-command run-compiled-command)
     (syntax (hash-table-set! database 'implementation
                              (vector evaluate-command interpret-command compile-command run-compiled-command))))))

(define-syntax (define-accessor x)
  (syntax-case x ()
    ((_ name position)
     (syntax (define (name implementation)
               (let ((entry (hash-table-ref/default database implementation #f)))
                 (if entry (vector-ref entry position) (error "no such implementation known!"))))))))

(define-accessor implementation->evaluate-command 0)
(define-accessor implementation->interpret-command 1)
(define-accessor implementation->compile-command 2)
(define-accessor implementation->run-compiled-command 3)

(define-implementation bigloo
  (lambda (x) (string-append "echo '" x "' | bigloo -s"))
  (lambda (x) (string-append "bigloo -i" x))
  (lambda (x) (string-append "bigloo -native" x " -o ." x "_bigloo"))
  (lambda (x) (string-append "./." x "_bigloo")))

(define-implementation mzscheme
  (lambda (x) (string-append "echo '" x "' | mzscheme --mute-banner"))
  (lambda (x) (string-append "mzscheme --script" x))
  (lambda (x) (string-append "mzc --extension --autodir" x))
  (lambda (x) (implementation->evaluate-command mzscheme (append-string "(load/use-compiled \"" x "\")"))))

(define-syntax (define-command x)
  (syntax-case x ()
    ((_ name implementation->command)
     (syntax (define (name implementation program)
               (system ((implementation->command implementation) program)))))))

(define-command evaluate implementation->evaluate-command)
(define-command interpret implementation->interpret-command)
(define-command compile implementation->compile-command)
(define-command run-compiled implementation->run-compiled-command)

(evaluate 'mzscheme "(+ 1 2)")
(evaluate 'bigloo '"(+ 5 2)")
