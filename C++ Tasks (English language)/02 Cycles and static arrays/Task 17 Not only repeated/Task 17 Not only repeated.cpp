// Task 17 Not only repeated.cpp

/* You need to write a program that receives a natural number N (N ≤ 100) at the input, then a sequence of N elements. It is known that all the elements of the sequence meet exactly twice except for one. It is required to express the one-time element and in the sequence. Use array to solve the task. */

/*
    Examples
    ====== Test #1 =======
    Input
    5 1 1 3 4 4

    Output
    3 2
    ====== Test #2 =======
    Input
    9 -1 4 5 4 -1 7 6 6 5

    Output
    7 5
    ====== Test #3 =======
    Input
    21 1 2 3 4 5 6 7 8 9 10 -100 10 9 8 7 6 5 4 3 2 1

    Output
    -100 10
*/

#include <iostream>

int main()
{
    int n;
    int arr[100];
    const int r = 100;
    int j = 0;
    int m = 0;
    int mib;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    bool f;
    for (int i = 0; i < n; i++)
    {
        f = true;
        for (int c = 0; c < n; c++)
        {
            if ((arr[c] == arr[i]) && (i != c))
            {
                f = false;
                break;
            }
        }
        if (f == true)
        {
            mib = arr[i];
            m = i;
            std::cout << mib << " ";
            std::cout << m << " ";
        }
    }
}
