// Task 18 The biggest negative number.cpp

/* You need to write a program in which the entry gets n (n ≤ 1000) natural number, then a1, a2, a3,... a sequence of integers and will produce the largest negative number and its order, if not "0 -1". When solving the problem, use an array. */

/*
    Examples
    ====== Test #1 =======
    Input
    4 4 3 2 1

    Output
    0 -1
    ====== Test #2 =======
    Input
    4 10 3 -1 5

    Output
    -1 2
    ====== Test #3 =======
    Input
    5 15 1478 -5 -478 -12

    Output
    -5 2
*/

// Option 1
#include <iostream>

int main()
{
    int n;
    int arr[1000];
    int index = -1;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 && index == -1)
        {
            index = i;
        }
        else if (arr[i] < 0 && arr[i] > arr[index])
        {
            index = i;
        }
    }

    if ((arr[index] > -1))
    {
        std::cout << 0 << ' ' << -1;
    }

    else
    {
        std::cout << arr[index] << ' ' << index;
    }
}

/*
// Option 2
#include <iostream>

int main()
{
    int index, i, N, x;
    x = 0;
    int arr[1000]{};
    std::cin >> N;
    for (i = 0; i < N; i++)
    {
        std::cin >> arr[i];
    }

    index = -1;
    for (i = 0; i < N; i++)
    {
        if (arr[i] < 0 && index == -1)
        {
            index = i;
            x = arr[i];
        }
        else if (arr[i] < 0 && arr[i] > arr[index])
        {
            index = i;
            x = arr[index];
        }
        else
        {

            // arr[index]=-1;
        }
    }
    std::cout << x << " " << index;
}

*/