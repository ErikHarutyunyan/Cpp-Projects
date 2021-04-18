// Task 16 Small ASCII code.cpp

/* You need to write a program that will get 2 characters from the ASCII table in the input and will produce YES if the second character has a smaller ASCII code than the first and NO otherwise. Output EQUAL for identical characters: */

/*
    Examples
    ====== Test #1 =======
    Input
    b a

    Output
    YES

    ====== Test #2 =======
    Input
    x y

    ====== Test #3 =======
    Input
    ^ ^

    Output
    EQUAL
*/

#include <iostream>

int main()
{
    char symbol_1, symbol_2;
    std::cin >> symbol_1 >> symbol_2;
    if (symbol_2 < symbol_1)
    {
        std::cout << "YES";
    }
    else if (symbol_1 == symbol_2)
    {
        std::cout << "EQUAL";
    }
    else
    {
        std::cout << "NO";
    }
}
