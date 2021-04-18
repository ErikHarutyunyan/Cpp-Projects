// Task 7 Duplicate elements.cpp

/* Write a program that will get a natural number N at the input, then a sequence of whole N elements. It is required to express all the elements of the sequence that are repeated. The numbers displayed must be separated by a space. Use a dynamic array to solve the problem. */

/*
    Examples
    ====== Test #1 =======
    Input
    5 1 2 3 4 5

    Output

    ====== Test #2 =======
    Input
    4
    1 2 2 1

    Output
    1 2
    ====== Test #3 =======
    Input
    10 1 1 2 2 3 3 4 4 5 5

    Output
    1 2 3 4 5
    ====== Test #4 =======
    Input
    6 1 1 2 1 2 2

    Output
    1 2
    ====== Test #5 =======
    Input
    4 1 1 1 1

    Output
    1
*/

#include <iostream>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> dynArr(N);
    int count = 0;
    for (int i = 0; i < dynArr.size(); ++i)
        std::cin >> dynArr[i];
    for (int i = 0; i < dynArr.size(); i++)
    {
        for (int j = i + 1; j < dynArr.size(); j++)
        {
            if (dynArr[i] == dynArr[j])
            {
                for (int n = j - 1; n >= 0; n--)
                {
                    if (dynArr[j] == dynArr[n])
                        count++;
                }
                if (count == 1)
                {
                    std::cout << dynArr[i] << " ";
                }
                count = 0;
            }
        }
    }
}