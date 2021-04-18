// Task 20 Insertion sort.cpp

/* You need to write a program that gets a natural number N (n ≤ 1000) in the input, followed by a sequence N consisting of integer elements. You need to have the program build the elements of a sequence in descending order. The numbers to be subtracted must be separated from each other by space. When solving the problem, use an array and the insertion sort algorithm. */

/*
    Examples
    ====== Test #1 =======
    Input
    10 1 2 3 4 5 6 7 8 9 10

    Output
    10 9 8 7 6 5 4 3 2 1
    ====== Test #2 =======
    Input
    5 -1 8 -15 99 -100

    Output
    99 8 -1 -15 -100
*/

#include <iostream>

int main()
{
    int N;
    int arr[1000]{};
    std::cin >> N;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> arr[i];
    }
    for (int j = 1; j < N; ++j)
    {
        int k = j;
        while (k - 1 >= 0 && arr[k - 1] < arr[k])
        {
            int temp = arr[k - 1];
            arr[k - 1] = arr[k];
            arr[k] = temp;
            --k;
        }
    }
    for (int t = 0; t < N; ++t)
    {
        std::cout << arr[t] << " ";
    }
}