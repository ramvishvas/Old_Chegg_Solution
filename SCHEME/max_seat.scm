(define (get-result lst)
	(cond ((null? lst) 0)
		;get different and check for less than condition
		((< (- (string->number (car (cddddr (car lst))))
				(string->number (car (cdr (cddddr (car lst))))))
			(get-result (cdr lst))) 
			(get-result (cdr lst))) ;; if less than is true
		(else (- (string->number (car (cddddr (car lst))))
				(string->number (car (cdr (cddddr (car lst)))))))
	)
)

(define max-open-seats
  (lambda (sections)
    (get-result (cdr sections))))

(define check-equal?
	(lambda (x y) (equal? x y)))

; ----- tests -------

(define example
  '(("Dept" "Number" "Section" "Class Nbr" "Capacity" "Enrollment")
    ("CS" "1000" "1" "11546" "30" "30")
    ("CS" "1025" "1" "11547" "30" "30")
    ("CS" "1120" "1" "11557" "30" "15")
    ("CS" "1130" "1" "11548" "30" "18")))

(check-equal? (max-open-seats example) 15)

; -----   end   -----