(define total-error
	(lambda (list-of-games)
		(if (null? list-of-games)
			0 ; if list-of-games is empty
			;; else get first tuple and extract number and then take difference
			;; and add difference with recursive call with remaining list
			(+ (abs (- (car (car list-of-games)) (car (cdr (car list-of-games)))))
			(total-error (cdr list-of-games)))
		)
	)
)

(define check-equal?
	(lambda (x y) (equal? x y)))

; ----- tests -------
(check-equal? (total-error '((2 -7) (-4 -20) (7 8) (-13 2))) 41)