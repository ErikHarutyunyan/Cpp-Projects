// Task 13 First negative.cpp

/* You need to write a program that gets a natural number N (n ≤ 1000) in the input, followed by a sequence N consisting of integer elements. The program must first use negative sequence elements, and then use non-negative ones. The numbers to be subtracted must be separated from each other by space. When solving the problem, use an array. */

/*
    Examples
    ====== Test #1 =======
    Input
    4 0 -2 6 -8

    Output
    -2 -8 0 6
    ====== Test #2 =======
    Input
    10 1 2 3 4 5 6 7 8 9 10

    Output
    1 2 3 4 5 6 7 8 9 10
    ====== Test #3 =======
    Input
    3 -1 -2 -3

    Output
    -1 -2 -3
    ====== Test #4 =======
    Input
    0

    Output

*/

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int tmp;
    int arr[1000]{};
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] >= 0)
                {
                    tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}