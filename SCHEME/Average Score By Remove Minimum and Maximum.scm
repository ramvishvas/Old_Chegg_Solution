; Explanations:
; 
; lst = (7 6 3 10 9) --> assume
; then ==> (car lst) --> 7 (car will give first element of list and if list is empty then it will give an error)
; And ==> 
; (cdr lst) --> (6 3 10 9) ==> it will exclude first one element and reurn list of rest element
; (cddr lst) --> (3 10 9)  ==> it will exclude first two element and reurn list of rest element
; (cdddr lst) --> (10 9)   ==> it will exclude first three element and reurn list of rest element
; (cddddr lst) --> (9)     ==> it will exclude first four element and reurn list of rest element
; (cdddddr lst) --> Not valid (valid upto 4d only)
; 

; avg = (totalsum - (minimum + maximum)) / 3
(define (score lst) ;
	(if (eq? (len lst) 5) ;if with condition list-length is equals to 5
		(/ (- (sumlst lst) (+ (minimum lst) (maximum lst))) 3)   ; it will excute if length of list is 5
																	; (car(cdr lst)) --> 6
																	; (car(cddr lst)) --> 3
																	; (car(cdddr lst)) --> 10
		0 ;if length is not equal to 5 then this will excute
	)
)


(define (len lst) 
	(if (empty? lst) 
		0 ;return 0 if list is empty
		(+ 1 (len(cdr lst))))) ; if list is not 0 the 1 +  of remaining list(ie lenght of (6 3 10 9))

(define (sumlst lst)
	(if (empty? lst) 
		0 ;return 0 if list is empty
		(+ (car lst) (len(cdr lst))))) ; if list is not 0 the fist element + lenght of remaining list(ie lenght of (6 3 10 9))

; it will find minimum
;cond conditiontrue dothis
;     conditiontrue dothis
;     .....so on
(define (minimum lst)
	(cond 
		((null? (cdr lst)) (car lst))
		((< (car lst) (minimum (cdr lst))) (car lst)) 
		(else (minimum (cdr lst)))))

; it will find maximum
(define (maximum lst)
	(cond 
		((null? (cdr lst)) (car lst))
		((> (car lst) (maximum (cdr lst))) (car lst))
		(else (maximum (cdr lst)))) )




; Compact Version (just excute these two function)

(define (len lst) (if (empty? lst) 0 (+ 1 (len(cdr lst))))) ;; it will find lenght of list

(define (score lst) (if (eq? (len lst) 5) (/ (+ (car(cdr lst)) (car(cddr lst)) (car(cdddr lst))) 3) 0)) ;; it will find required avg

(len '(1 2 4 5 7 8 4 5 1 2)) ;; to test len function
(score '(1 2 4 5 7)) ;; to test  avg score function