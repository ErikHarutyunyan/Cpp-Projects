// Task 8 Longest sequence.cpp

/* Write a program that will get a natural number N at the input, then a sequence of whole N elements. It is required to express the number of elements of the longest continuously increasing continuous sequence. */

/*
    Examples
    ====== Test #1 =======
    Input
    1 -10

    Output
    1
    ====== Test #2 =======
    Input
    2 123 123

    Output
    1
    ====== Test #3 =======
    Input
    2 -1245 234

    Output
    2
    ====== Test #4 =======
    Input
    5 1 2 3 -1 -20

    Output
    3
    ====== Test #5 =======
    Input
    5 1 1 2 3 1

    Output
    3
    ====== Test #6 =======
    Input
    5 0 0 0 1 10000

    Output
    3
    ====== Test #7 =======
    Input
    10 1 2 3 1 2 3 3 4 5 6

    Output
    4
    ====== Test #8 =======
    Input
    20 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 -2147483648

    Output
    1
*/

#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < v.size(); ++i)
        std::cin >> v[i];
    int count = 1, l;
    for (int i = 1; i < v.size(); i++)
    {
        l = 1;
        while (i < v.size() && v[i] > v[i - 1])
        {
            i++;
            l++;
        }
        if (l > count)
            count = l;
    }
    std::cout << count;
}