// Task 12 Of the transposed matrix.cpp

/* Write a program that will get a 5x10 matrix at the entrance, line by line and will map the transposed matrix of that matrix. It is necessary to express the elements of the matrix line by line, separating the elements of the same line from each other with a space. */

/*
    Examples
    ====== Test #1 =======
    Input
    1   2  3  4  5  6  7  8  9 10
    11 12 13 14 15 16 17 18 19 20
    21 22 23 24 25 26 27 28 29 30
    31 32 33 34 35 36 37 38 39 40
    41 42 43 44 45 46 47 48 49 50

    Output
    1 11 21 31 41
    2 12 22 32 42
    3 13 23 33 43
    4 14 24 34 44
    5 15 25 35 45
    6 16 26 36 46
    7 17 27 37 47
    8 18 28 38 48
    9 19 29 39 49
    10 20 30 40 50

    ====== Test #2 =======
    Input
    -19 6 16 -14 -24 2 -16 -8 11 5
    -23 13 13 -17 -22 -9 -2 -18 12 4
    14 8 -22 -10 -22 -8 16 14 10 18
    12 -25 20 18 19 23 23 -17 -16 -18
    23 11 -2 2 15 24 0 16 -22 15

    Output
    -19 -23 14 12 23
    6   13  8 -25 11
    16  13 -22 20 -2
    -14 -17 -10 18 2
    -24 -22 -22 19 15
    2  -9  -8  23 24
    -16 -2  16  23 0
    -8 -18 14 -17 16
    11  12 10 -16 -22
    5   4  18 -18 15
*/

#include <iostream>

int main()
{
    int rows = 5;
    int cols = 10;
    int **dynMatrix = new int *[rows];
    for (int i = 0; i < rows; ++i)
        dynMatrix[i] = new int[cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cin >> dynMatrix[i][j];
    }
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
            std::cout << dynMatrix[j][i] << " ";
        std::cout << "\n";
    }

    std::cout << "\n";
    for (int i = 0; i < rows; ++i)
        delete[] dynMatrix[i];
    delete[] dynMatrix;
}
