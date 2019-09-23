;;; car(1, 2, 3, 8) = 1 
;;; cdr(1, 2, 3, 8) = (2, 3, 8) 
(define (filter-non lst) 
	(cond ((null? lst) '()) ;;; check if list is empty
		;;; checking if element is number or not and 
		;;; recursive call to the function with rest list
	    ((integer? (car lst)) (filter-non (cdr lst))) 
	    ;;; if element is not number add that to list using cons
	    (else (cons (car lst) (filter-non (cdr lst))))))
		
;;; (filter-non '(1 2 'c 4 #f '(1 2))) > ('c #f '(1 2))