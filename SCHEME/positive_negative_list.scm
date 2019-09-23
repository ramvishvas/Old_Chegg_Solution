; if x > 0 then it will return #t
; else #f
(define (pos x)
	(> x 0))

; if x < 0 then it will return #t
; else #f
(define (neg x)
	(< x 0))

(define (f fun list)
	(cond ((null? list) '()) ;check if list is empty then return empty list 
		;call function fun with argument car list
		;and if its return true then add that element to the list using cons
		((fun (car list)) (cons (car list) (f fun (cdr list))))
		;if its return false the dont add that element to list
		(else (f fun (cdr list)))))


;  (f neg '(1 2 -3 4 5 -6))
;  (f pos '(1 2 -3 4 5 -6))