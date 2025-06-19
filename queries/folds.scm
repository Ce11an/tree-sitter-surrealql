; Fold entire multi-line SELECT statements
(select_statement) @fold

; Foldable code blocks (content inside braces)
(block) @fold

; Fold multi-line DEFINE statements (schema definitions, etc.)
(define_table_statement) @fold
(define_field_statement) @fold
(define_index_statement) @fold
(define_access_statement) @fold
(define_function_statement) @fold
(define_event_statement) @fold

; Fold if-statements and control flow
(if_statement) @fold
(for_statement) @fold

; Fold multi-line expressions in parentheses
(sub_query) @fold
