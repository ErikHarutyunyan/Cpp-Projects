// Task 17 Binary presentation.cpp

/* Write a program that will get a positive integer in the entrance and will produce binary representation of this number. The transition from ten to binary is performed using the function. */

/*
    Examples
    ====== Test #1 =======
    Input
    5

    Output
    101
    ====== Test #2 =======
    Input
    100

    Output
    1100100
    ====== Test #3 =======
    Input
    0

    Output
    0
    ====== Test #4 =======
    Input
    65536

    Output
    10000000000000000
    ====== Test #5 =======
    Input
    1

    Output
    1
    ====== Test #6 =======
    Input
    87381

    Output
    10101010101010101
*/

#include <iostream>
#include <string>

std::string toBinary(int &n)
{
    std::string bin;
    if (n == 0)
        bin = '0';
    while (n != 0)
    {
        bin = (n % 2 == 0 ? "0" : "1") + bin;
        n /= 2;
    }
    return bin;
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << toBinary(n);
}