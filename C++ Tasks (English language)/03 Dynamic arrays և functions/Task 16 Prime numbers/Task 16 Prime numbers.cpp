// Task 16 Prime numbers.cpp

/* Write a program that will get a positive number in the input and will produce " Yes "if this number is prime and" no " otherwise. The check must be performed using the function.  */

/*
    Examples
    ====== Test #1 =======
    Input
    2

    Output
    YES

    ====== Test #2 =======
    Input
    10

    Output
    NO
    ====== Test #3 =======
    Input
    31

    Output
    YES
    ====== Test #4 =======
    Input
    1

    Output
    NO
*/

#include <iostream>

bool is_prime(unsigned int n)
{
    if (n == 2)
        return true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
        else
            return true;
    }
}

int main()
{
    unsigned int a;
    std::cin >> a;
    if (is_prime(a))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}