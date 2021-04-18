// Task 10 is close to 0.cpp

/* Write a program that will get a natural number N at the input, then a sequence of whole N elements. It is required to express the two elements of the sequence whose sum is closest to 0. If there are any, output them first.  */

/*
    Examples
    ====== Test #1 =======
    Input
    5 1 2 3 4 5

    Output
    1 2
    ====== Test #2 =======
    Input
    10 -100 100 -753 999 -159 9 45 7 -8 -1

    Output
    -100 100
    ====== Test #3 =======
    Input
    3 0 1 -2

    Output
    0 1
    ====== Test #4 =======
    Input
    10 38 44 63 -51 -35 19 84 -69 4 -46

    Output
    44 -46
*/

// Option 1
#include <iostream>
#include <cmath>

int main()
{
    unsigned size;
    int min;
    std::cin >> size;
    short *dynArr = new short[size];
    for (int i = 0; i < size; i++)
        std::cin >> dynArr[i];
    int index_1 = 0, index_2 = 1, i, j;
    for (i = 0; i < size - 1; i++)
        for (j = i + 1; j < size; j++)
            if (fabs(0 - dynArr[i] - dynArr[j]) < fabs(0 - dynArr[index_1] - dynArr[index_2]))
            {
                index_1 = i;
                index_2 = j;
            }
    std::cout << dynArr[index_1] << " " << dynArr[index_2];
}

/*
// Option 2
#include <iostream>
#include <cmath>
#include <vector>

int main()
{
    unsigned size;
    int min;
    std::cin >> size;
    std::vector<int> dynArr(size);
    for (int i = 0; i < dynArr.size(); i++)
        std::cin >> dynArr[i];
    int index_1 = 0, index_2 = 1, i, j;
    for (i = 0; i < dynArr.size() - 1; i++)
        for (j = i + 1; j < dynArr.size(); j++)
            if (fabs(0 - dynArr[i] - dynArr[j]) < fabs(0 - dynArr[index_1] - dynArr[index_2]))
            {
                index_1 = i;
                index_2 = j;
            }
    std::cout << dynArr[index_1] << " " << dynArr[index_2];
}
*/