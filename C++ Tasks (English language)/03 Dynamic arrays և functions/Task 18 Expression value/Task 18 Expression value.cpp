// Task 18 Expression value.cpp

/* Write a function that gets N natural numbers as an argument and returns n!/ (n + 1) the value of the expression. Then calculate the value of the following phrase 1!/2 + 2!/3 + 3!/4 + 4!/5 + 5!/6 + 6!/7 + 7!/8 + 8!/9 + 9!/10 + 10!/ 11. the response is displayed with an accuracy of 5 characters. */

/*
    Examples
    ====== Test #1 =======
    Input

    Output
    371419.232900
*/

#include <iostream>

double expression_value(int n)
{
    double num = 0;
    double f = 1;
    double i = 2;
    double sum = 0;
    while (num <= n - 1)
    {
        f = f + f * num;
        num++;
        sum += f / i;
        ++i;
    }
    std::cout << std::fixed << sum;
}

int main()
{
    int n = 10;
    expression_value(n);
}