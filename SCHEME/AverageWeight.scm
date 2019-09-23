(define average-weight
  (lambda (height-weight-list)
    'YOUR-CODE-HERE ))

; ----- tests -------

(check-equal? (average-weight '((79 . 225)))
              225.0)
(check-equal? (average-weight '((70 . 150) (62 . 100)))
              125.0)
(check-equal? (average-weight '((76 . 195) (81 . 212) (79 . 225) (78 . 206)))
              209.5)