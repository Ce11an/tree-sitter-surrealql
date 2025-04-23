; Fold entire multi-line SELECT statements
(select_statement) @fold

; Foldable code blocks (content inside braces)
(block) @fold

; Fold multi-line DEFINE statements (schema definitions, etc.)
(define_table) @fold
(define_field) @fold
(define_index) @fold
(define_access) @fold

; Fold function body (the block is already handled, so this is optional)
; The following ensures the function's internal statements can be folded
(define_function 
  "{" (_)* "}") @fold

; Fold conditional bodies if present (e.g., IF/ELSE blocks)
(if_statement 
  "{" (_)* "}") @fold

; Fold transaction or multi-statement blocks if applicable (BEGIN...COMMIT)
(transaction_block) @fold

