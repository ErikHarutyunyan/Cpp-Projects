// Task 19 Conditional phrase.cpp

/* You need to write a program that will get the input integers A and B and O (+, -, *, /, %) action sign. As a result, the program should formulate the action O in relation to the applied numbers A and B. You must create a separate function for each operation. */

/*
    Examples
    ====== Test #1 =======
    Input
    10 20 +

    Output
    30
    ====== Test #2 =======
    Input
    -10 5 *

    Output
    -50
    ====== Test #3 =======
    Input
    5 10 %

    Output
    5
    ====== Test #4 =======
    Input
    -50 -10 /

    Output
    5
    ====== Test #5 =======
    Input
    -5000 -5000 -

    Output
    0
*/

#include <iostream>

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divv(int a, int b)
{
    return a / b;
}
int percen(int a, int b)
{
    return a % b;
}
int main()
{
    int a, b;
    char x;
    std::cin >> a >> b >> x;
    if (x == '+')
        std::cout << add(a, b);
    else if (x == '-')
        std::cout << sub(a, b);
    else if (x == '*')
        std::cout << mul(a, b);
    else if (x == '/')
        std::cout << divv(a, b);
    else if (x == '%')
        std::cout << percen(a, b);
}
