(define (mystery atm lst)
	(cond
		((null? lst) '())
		((eq? atm (car lst)) (mystery atm (cdr lst)))
		(else (cons (car lst) (mystery atm (cdr lst))))
		)
	)

(mystery 'a '(c a a b a d))