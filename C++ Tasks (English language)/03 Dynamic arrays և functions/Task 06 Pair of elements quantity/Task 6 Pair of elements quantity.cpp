// Task 6 Pair of elements quantity.cpp

/* Write a program that will get a natural number N at the input, then a sequence of whole N elements. The program needs to display the number of pairs of sequence elements. Use a dynamic array to solve the problem. */

/*
    Examples
    ====== Test #1 =======
    Input
    1 5

    Output
    0
    ====== Test #2 =======
    Input
    5 2 4 6 8 10

    Output
    5
    ====== Test #3 =======
    Input
    100 1 1 1 1 1 1 1 1 1 1  1 1 1 1 1 1 1 1 1 1  1 1 1 1 1 1 1 1 1 1  1 1 1 1 1 1 1 1 1 1  1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2

    Output
    50
    ====== Test #4 =======
    Input
    5 -1 -2 -3 -4 -5

    Output
    2
*/

#include <iostream>

int main()
{
    unsigned size;
    std::cin >> size;
    int *dynArr = new int[size];
    int counnt = 0;
    for (int i = 0; i < size; i++)
        std::cin >> dynArr[i];
    for (int i = 0; i < size; i++)
    {
        if (dynArr[i] % 2 == 0)
            ++counnt;
    }
    std::cout << counnt;
}