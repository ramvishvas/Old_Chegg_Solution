; k = number
; total_count = count of occurance of k in list
(define (freq k lst total_count) 
	; if list is null then append k and total_count in a list and return
	(cond ((null? lst)  (cons (list k total_count) lst))
		;; if match of k found==> increment total_count and call the function
	  	((= k (car lst)) (freq  k (cdr lst) (+ 1 total_count))) 
	  	;if did not match append k and total_count in a list and 
	  	;recursive call with remaining list
	    (else (cons (list k total_count) (freq (car lst) (cdr lst) 1))))) 

(define (rle s)
	(cond ((null? s) '())
		; call with initial count 1
        (else (freq (car s) (cdr s) 1))))

;  (rle '(1 1 1 1 1 1 2 2 2 5 5 5 5 5 7 8 8))
;  (rle '(1 1 1 3 3 8 8 4 5 9 9 9 9 10 10))
;  (rle '(1 1 1 1 1 1 3 3 8 8 4 5 9))

