// Task 11 Different from the last one.cpp

/* Write a program that gets a natural number N (n ≤ 1000) in the input, followed by a sequence N consisting of integer elements. As a result, the program must select the number of elements other than the last element in the sequence. When solving the problem, use an array. */

/*
    Examples
    ====== Test #1 =======
    Input
    4 1 2 3 4

    Output
    3
    ====== Test #2 =======
    Input
    4 1 1 1 1

    Output
    0
    ====== Test #3 =======
    Input
    0

    Output
    0
    ====== Test #4 =======
    Input
    1 44

    Output
    0
*/

#include <iostream>

int main()
{
    int N;
    int count = 0;
    std::cin >> N;
    int arr[1000]{};
    for (int i = 0; i < N; ++i)
    {
        std::cin >> arr[i];
    }
    for (int j = 0; j < N; ++j)
    {
        if (arr[N - 1] != arr[j])
        {
            ++count;
        }
    }
    std::cout << count;
}
