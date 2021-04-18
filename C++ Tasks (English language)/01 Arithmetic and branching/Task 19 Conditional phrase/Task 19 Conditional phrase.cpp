// Task 19 Conditional phrase.cpp

/* Write a program that will get the integers A, B, C and  D nearby. It is necessary to display the difference between the produced number A and D and the sum of numbers B and C, if A exceeds C. Producing the sum of numbers B and D, if C exceeds A. Otherwise, the sum of all four numbers */

/*
        Examples
    ====== Test #1 =======
    Input
    9 3 10 5

    Output
    72

    ====== Test #2 =======
    Input
    10 3 10 5

    Output
    28

    ====== Test #3 =======
    Input
    10 3 9 5

    Output
    38

    ====== Test #4 =======
    Input
    100 400 258 100

    Output
    50000

    ====== Test #5 =======
    Input
    -100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100

    Output
    10201

    ====== Test #6 =======
    Input
    1598 7539 1598 7539

    Output
    18274
*/

#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (a > c)
    {
        std::cout << (a * d) - (b + c);
    }
    else if (c > a)
    {
        std::cout << (b + d) * a;
    }
    else
    {
        std::cout << a + b + c + d;
    }
}
