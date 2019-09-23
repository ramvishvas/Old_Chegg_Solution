(define (product lst)
  (cond
    ((null? lst) '()) ;if list is empty return empty list
    ((null? (cdr lst)) (car lst)) ; if list has single number return that number
    (else (* (car lst) (product (cdr lst)))))) ; multiply each number

; (product '(2 3 4 5))