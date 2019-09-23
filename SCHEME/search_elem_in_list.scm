;;; car(1, 2, 3, 8) = 1 
;;; cdr(1, 2, 3, 8) = (2, 3, 8) 
(define (fun k list1) 
	(cond ((null? list1) #f) ;;; check if list is empty
	    ((= k (car list1)) #t) ;;; if found at first position return #t
	    (else (fun k (cdr list1)))));;; function calling with removing first element
		

		
;;; (fun 'hello '(a c (e d f hello g)) h)) => #t
;;; (fun 'lol '(b a (e (d c bar g)) h)) => #f 