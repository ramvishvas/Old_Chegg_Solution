#lang racket
;;; car(1, 2, 3, 8) = 1 == first element
;;; cdr(1, 2, 3, 8) = (2, 3, 8) = list excluding first element
(define (fun k list1) 
	(cond ((null? list1) #f) ;;; check if list is empty
	    ((equal? k (car list1)) #t) ;;; if found at first position return #t
            ((list? (car list1)) (fun k (car list1))) ;;; check if car(first element of list) is also a list the search k in it
 	    (else (fun k (cdr list1)))));;; function calling with removing first element
		
		
;;; (fun 'hello '(a c (e d f hello g) h)) => #t
;;; (fun 'lol '(b a (e (d c bar g)) h)) => #f 