// Task 14 Arrays difference.cpp

/* You need to write a program that will get a sequence of two integers of length 10 at the entrance and will display all the elements from the first sequence that are not in the second. The output numbers must be separated by a space and must be displayed in the same order as they were entered. When solving the task, use an array. */

/*
    Examples
    ====== Test #1 =======
    Input
    1 2 3 4 5 6 7 8 9 10
    1 2 3 4 5 6 7 8 9 10

    Output

    ====== Test #2 =======
    Input
    10 20 30 40 50 60 70 80 90 100
    10 20 30 40 50 50 40 30 20 10

    Output
    60 70 80 90 100
    ====== Test #3 =======
    Input
    1 2 3 4 5 6 7 8 9 10
    -1 -2 -3 -4 -5 -6 -7 -8 -9 -10

    Output
    1 2 3 4 5 6 7 8 9 10
    ====== Test #4 =======
    Input
    15 -50 68 78 194 66 752 -111 789 -1000
    0 -10000 85 -50 456 -111 854 15 -752 78

    Output
    68 194 66 752 789 -1000
*/

#include <iostream>

int main()
{
    const int n = 10;
    int arr_1[n];
    int arr_2[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr_1[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr_2[i];
    }

    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n;)
        {
            int x = arr_1[k];
            int y = arr_2[j];
            if (arr_1[k] == arr_2[j])
            {
                break;
            }
            if (j == 9)
            {
                std::cout << arr_1[k] << " ";
                break;
            }
            j++;
        }
    }
}