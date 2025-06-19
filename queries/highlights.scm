; Highlighting queries for refactored SurrealQL grammar

; Keywords - Statement keywords
[
  (SELECT)
  (FROM) 
  (WHERE)
  (CREATE)
  (UPDATE)
  (DELETE)
  (INSERT)
  (UPSERT)
  (RELATE)
  (DEFINE)
  (REMOVE)
  (ALTER)
  (USE)
  (SHOW)
  (INFO)
] @keyword

; Keywords - Control flow
[
  (IF)
  (ELSE)
  (FOR)
  (LET)
  (RETURN)
  (BREAK)
  (CONTINUE)
  (THROW)
] @keyword.control

; Keywords - Logical operators
[
  (AND)
  (OR)
  (NOT)
  (IS)
] @keyword.operator

; Keywords - Data definition
[
  (TABLE)
  (FIELD)
  (INDEX)
  (EVENT)
  (FUNCTION)
  (NAMESPACE)
  (DATABASE)
  (SCOPE)
  (PARAM)
  (ACCESS)
  (USER)
  (TOKEN)
  (ANALYZER)
] @keyword.type

; Keywords - Modifiers
[
  (SET)
  (UNSET)
  (ONLY)
  (VALUE)
  (AS)
  (ON)
  (BY)
  (IN)
  (TO)
  (INTO)
  (WITH)
  (FROM)
  (ORDER)
  (GROUP)
  (LIMIT)
  (ASC)
  (DESC)
] @keyword.modifier

; Keywords - Transaction
[
  (BEGIN)
  (COMMIT)
  (CANCEL)
  (TRANSACTION)
] @keyword.transaction

; Keywords - Schema types
[
  (TYPE)
  (SCHEMAFULL)
  (SCHEMALESS)
  (ANY)
  (NORMAL)
  (RELATION)
] @keyword.type

; Literals
[
  (string)
  (prefixed_string)
] @string

[
  (int)
  (float) 
  (decimal)
] @number

[
  (TRUE)
  (FALSE)
] @boolean

[
  (NULL)
  (NONE)
] @constant.builtin

; Identifiers and functions
(identifier) @variable
(variable_name) @variable.builtin
(function_call (function_name) @function)

; Comments
(comment) @comment

; Operators - Assignment
(assignment_operator) @operator

; Operators - Binary expressions (new structure)
(logical_or_expression operator: _ @operator)
(logical_and_expression operator: _ @operator)  
(equality_expression operator: _ @operator)
(relational_expression operator: _ @operator)
(additive_expression operator: _ @operator)
(multiplicative_expression operator: _ @operator)
(exponential_expression operator: _ @operator)

; Operators - Special operators
(is_not_operator) @operator
(not_in_operator) @operator

; Field assignments and object properties
(field_assignment 
  (identifier) @property)

(object_property 
  (object_key) @property)

; Record IDs
(record_id 
  (object_key) @type.builtin)

; Path expressions
(path_expression 
  (base_atom (identifier) @variable))

(property_access 
  (identifier) @property)

; Graph traversal
(graph_traversal) @operator.graph

; Duration values
(duration) @constant.time

; Range expressions  
(range) @operator.range

; Cast expressions
(cast_expression 
  (type_name) @type)

; Punctuation
[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

[
  ","
] @punctuation.delimiter

(semi_colon) @punctuation.delimiter

[
  "."
  ":"
  "->"
  "<-"
  "<->"
] @punctuation.special