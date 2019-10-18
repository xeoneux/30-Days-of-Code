(define meal-cost (read))

(define tip/pc (read))

(define tax/pc (read))

(define total-cost (* meal-cost (/ (+ 100 tip/pc tax/pc) 100)))

(printf "The total meal cost is ~a dollars." (exact-round total-cost))
