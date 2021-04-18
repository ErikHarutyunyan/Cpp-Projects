// Task 9 Number of repetitions of an element.cpp

/* Write a program that will get N natural numbers in the input, and then a sequence Of n consisting of integer elements. It is required to express the number of repetitions of each sequence element.  */

/*
    Examples
    ====== Test #1 =======
    Input
    5 1 2 3 4 5

    Output
    1 1 1 1 1
    ====== Test #2 =======
    Input
    10 1 1 2 2 3 3 4 4 5 5

    Output
    2 2 2 2 2 2 2 2 2 2
    ====== Test #3 =======
    Input
    10 1 2 -10 5 2 -6 -6 7 7 7

    Output
    1 2 1 1 2 2 2 3 3 3
*/

#include <iostream>

int main()
{
    int count;
    unsigned size;
    std::cin >> size;
    short *dynArr = new short[size];
    for (int i = 0; i < size; i++)
        std::cin >> dynArr[i];
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; ++j)
        {
            if (dynArr[i] == dynArr[j])
                ++count;
        }
        std::cout << count << " ";
    }
}