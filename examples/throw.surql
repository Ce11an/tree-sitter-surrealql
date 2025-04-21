-- Throw an error
THROW "some error message";

-- Throw a value from a select statement
CREATE event SET time = time::now();
CREATE event SET time = time::now();
THROW (SELECT * FROM event);

-- Throw in a transaction
BEGIN TRANSACTION;

LET $transfer_amount = 150;

CREATE account:one SET dollars =  100;
CREATE account:two SET dollars =  100;

UPDATE account:one SET dollars -= $transfer_amount;
UPDATE account:two SET dollars += $transfer_amount;

IF account:one.dollars < 0 {
    THROW "Insufficient funds, would have $" + <string>account:one.dollars + " after transfer"
};

COMMIT TRANSACTION;

SELECT * FROM account;
