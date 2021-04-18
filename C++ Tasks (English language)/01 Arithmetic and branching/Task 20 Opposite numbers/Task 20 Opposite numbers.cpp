// Task 20 Opposite numbers.cpp

/* Write a program that will get the integers A, B, C and D at the input. Required to express YES if A is opposite to D and B is not opposite to C, NO otherwise։ */

/*
    Examples
    ====== Test #1 =======
    Input
    1 2 3 -1

    Output
    YES

    ====== Test #2 =======
    Input
    1 2 -2 -1

    Output
    NO
    === Test #3 =======
    Input
    -145 785 785 145

    Output
    YES

    ====== Test #4 =======
    Input
    -500 500 500 -500

    Output
    NO

    ====== Test #5 =======
    Input
    789 -789 789 -789

    Output
    NO

    ====== Test #6 =======
    Input
    951 753 -753 -951

    Output
    NO

    ====== Test #7 =======
    Input
    0 0 0 0

    Output
    NO
*/

#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (d + a == 0)
    {
        if (b + c != 0)
        {
            std::cout << "YES";
        }
        else
        {
            std::cout << "NO";
        }
    }
    else
    {
        std::cout << "NO";
    }
}
