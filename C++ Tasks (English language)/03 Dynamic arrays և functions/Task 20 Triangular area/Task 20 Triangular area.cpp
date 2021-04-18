// Task 20 Triangular area.cpp

/* You need to write a program that will get three sides of the triangle in the entrance and output its area. To solve the problem, use the Heron formula and the sqrt () function. */

/*
    Examples
    ====== Test #1 =======
    Input
    3 4 5

    Output
    6
    ====== Test #2 =======
    Input
    4 4 5.65

    Output
    7.99998
    ====== Test #3 =======
    Input
    10 10 14

    Output
    49.99
    ====== Test #4 =======
    Input
    7 8 9

    Output
    26.8328
*/

#include <iostream>
#include <cmath>

double area(double a, double b, double c)
{
    double p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    std::cout << area(a, b, c);
}