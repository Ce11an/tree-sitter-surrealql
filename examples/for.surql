-- Create a person for everyone in the array
FOR $name IN ['Tobie', 'Jaime'] {
	CREATE type::thing('person', $name) CONTENT {
		name: $name
	};
};

-- Set can_vote to true for every person over 18 years old.
FOR $person IN (SELECT VALUE id FROM person WHERE age >= 18) {
	UPDATE $person SET can_vote = true;
};

-- A FOR loop can also be made out of a range UUID of integers.
FOR $year IN 0..=2024 {
    CREATE historical_events SET
        for_year = $year,
        events = "To be added";
}

-- Declared variables
LET $table1 = "person";
LET $table2 = "cat";

FOR $i in 0..4 {
    CREATE type::thing($table1, $i);
	CREATE type::thing($table2, $i);
};

-- Using break statement
LET $numbers = [1,2,3,4,5,6,7,8,9];

FOR $num IN $numbers {
    IF $num > 5 {
        BREAK;

    } ELSE IF $num < 5 {
        CREATE type::thing(
            'person', $num
        ) CONTENT {
            name: "Person number " + <string>$num
        };
    };
};

-- Break when unwanted data is found
-- Data retrieved from somewhere which contains many NONE values
LET $weather = [
    {
	city: 'London',
	temperature: 22.2,
	timestamp: 1722565566389
    },
    NONE,
    {
	city: 'London',
	temperature: 20.1,
	timestamp: 1722652002699
    },
    {
	city: 'Phoenix',
	temperature: 45.1,
	timestamp: 1722565642160
    },
    NONE,
    NONE,
    {
	city: 'Phoenix',
	temperature: 45.1,
	timestamp: 1722652070372
    }
];

-- Sort the data to move the NONE values to the end
-- and break once the first NONE is reached
FOR $data IN array::sort::desc($weather) {
    IF $data IS NONE {
        BREAK;
    } ELSE {
        CREATE weather CONTENT $data;
    };
};
