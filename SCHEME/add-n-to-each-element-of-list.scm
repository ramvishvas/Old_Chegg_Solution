(define (add-n-to-each-element-of-list n list)
	(cond ((null? list) '()) ;check if list is empty then return empty list  
		;add n to each element and form a list using cons
  		(else (cons (+ n (car list)) (add-n-to-each-element-of-list n (cdr list)))))) 

; (add-n-to-each-element-of-list 5 '(1 2 3 4 5))

