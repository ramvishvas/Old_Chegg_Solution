;;; car(1, 2, 3, 8) = 1 
;;; cdr(1, 2, 3, 8) = (2, 3, 8) 
(define (myFlattenFunction lst) 
	(cond ((null? lst) '()) ;;; check if list is empty
		;; if car is list then append car list and cdr list and recursive call with new lst
		((list? (car lst)) (myFlattenFunction (append (car lst) (cdr lst))))
	    (else (cons (car lst) (myFlattenFunction (cdr lst))))));;; recursive calling

;;; (myFlattenFunction '(a c (e d f hello g) h))
;;; (myFlattenFunction '(a (a (a (a b))) (((a b) b) b) b))