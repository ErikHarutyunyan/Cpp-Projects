// Задача 11 Разница матриц.cpp

/* Написать программу, которая получит в входе две матрицы 6х6-строку за строкой и будет производить разницу между этими матрицами. Необходимо отобразить элементы матрицы строкой за строкой, разделив элементы одной и той же строки на пробел друг от друга. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    1   2  3  4  5  6
    7   8  9 10 11 12
    13 14 15 16 17 18
    19 20 21 22 23 24
    25 26 27 28 29 30
    31 32 33 34 35 36

    1   2  3  4  5  6
    7   8  9 10 11 12
    13 14 15 16 17 18
    19 20 21 22 23 24
    25 26 27 28 29 30
    31 32 33 34 35 36

    Результат работы
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 0 0 0 0 0

    ====== Тест #2 =======
    Входные данные
    1   2  3  4  5  6
    7   8  9 10 11 12
    13 14 15 16 17 18
    19 20 21 22 23 24
    25 26 27 28 29 30
    31 32 33 34 35 36

    -1   -2  -3  -4  -5  -6
    -7   -8  -9  -10 -11 -12
    -13  -14 -15 -16 -17 -18
    -19  -20 -21 -22 -23 -24
    -25  -26 -27 -28 -29 -30
    -31  -32 -33 -34 -35 -36

    Результат работы
    2 4 6 8 10 12
    14 16 18 20 22 24
    26 28 30 32 34 36
    38 40 42 44 46 48
    50 52 54 56 58 60
    62 64 66 68 70 72
*/

#include <iostream>

int main()
{
    int rows = 6;
    int cols = 6;
    int **dynMatrix = new int *[rows];
    int **dynMatrix2 = new int *[rows];
    int **dynMatrix3 = new int *[rows];
    for (int i = 0; i < rows; ++i)
    {
        dynMatrix[i] = new int[cols];
        dynMatrix2[i] = new int[cols];
        dynMatrix3[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cin >> dynMatrix[i][j];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cin >> dynMatrix2[i][j];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            dynMatrix3[i][j] = dynMatrix[i][j] - dynMatrix2[i][j];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << dynMatrix3[i][j] << " ";
        std::cout << "\n";
    }
    for (int i = 0; i < rows; ++i)
    {
        delete[] dynMatrix[i];
        delete[] dynMatrix2[i];
        delete[] dynMatrix3[i];
    }
    delete[] dynMatrix;
    delete[] dynMatrix2;
    delete[] dynMatrix3;
}
