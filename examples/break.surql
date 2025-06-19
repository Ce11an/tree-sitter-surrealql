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
