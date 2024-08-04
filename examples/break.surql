--TODO: Fix `LET` statement
--TODO: Fix `CONTINUE` keyword
--TODO: Fix `BREAK` keyword
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
    },
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
