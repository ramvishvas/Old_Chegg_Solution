(define make-increment-by

   (lambda (by)

      (lambda (n)

         (+ n by))))

(define twice

   (lambda (f)

       (lambda (x) (f (f x)))))



((make-increment-by 10) 20)
((make-increment-by 0) 0)
((make-increment-by 0) 30)

((twice (make-increment-by 10)) 20)
((twice (make-increment-by 0)) 0)
((twice (make-increment-by 0)) 30)