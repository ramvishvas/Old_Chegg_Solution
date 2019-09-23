; this function will give size of list
(define (len lst)
	(cond ((null? lst) 0)
		(else (+ 1 (len (cdr lst))))))

(define (Sqr_sum lst1 lst2)
		; checking either argument not a list
		(cond ((or (not (list? lst1)) (not (list? lst2))) 'error)
			; checking one list longer than the other.
			((not (equal? (len lst1) (len lst2))) 'error)
			; if both list are empty return empty list
			((and (null? lst1) (null? lst2)) '())
			; recursive call to the function and making list of square sum
			(else (cons (+ (* (car lst1) (car lst1)) (* (car lst2) (car lst2))) 
				(Sqr_sum (cdr lst1) (cdr lst2))))))

;(Sqr_sum (list 1 2 3) (list 3 4 5)) 