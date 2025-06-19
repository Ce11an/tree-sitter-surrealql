-- The smallest possible IF THEN statement simply does something when a condition is true, and nothing otherwise.
IF 9 = 9 { RETURN 'Nine is indeed nine' };

-- As the last line of a scope is its return value, the RETURN keyword can also be placed before the entire IF THEN
-- statement. This is particularly convenient in long IF ELSE chains to avoid using the RETURN keyword at the end
-- of every check for a condition.

LET $num = 100;

RETURN IF $num < 0 {
    "Negative"
} ELSE IF $num = 0 {
    "Zero"
} ELSE IF $num = 13 {
    "Thirteen"
} ELSE {
    "Positive uninteresting number"
};

-- The THROW keyword inside {} braces can be used to break out of an IF LET statement early.
LET $badly_formatted_datetime = "2024-04TT08:08:08Z";

IF !type::is::datetime($badly_formatted_datetime) {
    THROW "Whoops, that isn't a real datetime"
};

-- ELSE IF branches and a final ELSE can be added into an IF ELSE statement:
RETURN
    IF $access = "admin" { (SELECT * FROM account) }
    ELSE IF $access = "user"  { (SELECT * FROM $auth.account) }
    ELSE { THROW "Access method hasn't been defined!" };

-- The output of an IF ELSE statement can be assigned to a parameter:
LET $num = 9;
LET $odd_even =
    IF $num % 2 = 0 { "even" }
    ELSE { "odd" };
