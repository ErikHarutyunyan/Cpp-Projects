// Task 15 Mirror sum.cpp
/* You need to write a program that receives n (n ≤ 1000) natural numbers at the input, then the sequence of integers a0, a1, a2, ... an-1 b will print b0, b1, b2, ... b (n-1 ) / 2. Where bi = ai + an - i - 1. The numbers displayed must be separated by a space. Use array to solve the problem։ */

/*
    Examples
    ====== Test #1 =======
    Input
    9 1 2 3 4 5 6 7 8 9

    Output
    10 10 10 10
    ====== Test #2 =======
    Input
    6 1 5 10 15 -20 30

    Output
    31 -15 25
*/

#include <iostream>

int main()
{
    int n;
    int arr[1000]{};
    int b[1000]{};
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int j = 0; j < n / 2; j++)
    {
        b[j] = arr[j] + arr[n - j - 1];
        std::cout << b[j] << " ";
    }
}