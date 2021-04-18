// Task 10 Reverse order.cpp

/* Write a program that gets a natural number N (n ≤ 1000) in the input, followed by a sequence N consisting of integer elements. As a result, the program should develop a sequence in reverse order. When solving the problem, use an array. */

/*
    Examples
    ====== Тест #1 =======
    Input
    5 1 2 3 4 5

    Output
    5 4 3 2 1
    ====== Тест #2 =======
    Input
    10 -100 100 -753 999 -159 9 45 7 -8 -1

    Output
    -1 -8 7 45 9 -159 999 -753 100 -100
*/

/*
// Option 1
#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int arr[1000]{};
    for (int i = 0; i < N; ++i)
    {
        std::cin >> arr[i];
    }

    for (int j = N; j > 0; j--)
    {

        std::cout << arr[j - 1] << " ";
    }
}
*/

// Option 2
#include <iostream>

int main()
{
    int i, b, N;
    int a[1000]{};
    std::cin >> N;
    for (i = 0; i < N; i++)
    {
        std::cin >> a[i];
    }
    for (i = 0; i < N / 2; i++)
    {
        b = a[i];
        a[i] = a[N - i - 1];
        a[N - i - 1] = b;
    }
    for (i = 0; i < N; i++)
    {
        std::cout << a[i] << " ";
    }
}