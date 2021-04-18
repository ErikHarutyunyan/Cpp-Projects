// Задача 14 Удалить колонку.cpp

/* Напишите программу, которая получит на входе число K (1 ≤ K ≤ 6), затем элементы матрицы 6х5, строка за строкой. Необходимо убрать колонку K из матрицы, чтобы выразить полученную новую матрицу. Элементы матрицы необходимо построчно выразить, отделив элементы одной строки друг от друга пробелом. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    2
    1  2  3  4 5
    6  7  8  9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
    26 27 28 29 30

    Результат работы
    1 3 4 5
    6 8 9 10
    11 13 14 15
    16 18 19 20
    21 23 24 25
    26 28 29 30

    ====== Тест #2 =======
    Входные данные
    1  -1  -2  -3  -4 -5
    -6  -7  -8  -9 -10
    -11 -12 -13 -14 -15
    -16 -17 -18 -19 -20
    -21 -22 -23 -24 -25
    -26 -27 -28 -29 -30

    Результат работы
    -2 -3 -4 -5
    -7 -8 -9 -10
    -12 -13 -14 -15
    -17 -18 -19 -20
    -22 -23 -24 -25
    -27 -28 -29 -30
    
    ====== Тест #3 =======
    Входные данные:101
    5  1  2  3  4 5
    6  7  8  9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
    26 27 28 29 30

    Результат работы:71
    1 2 3 4
    6 7 8 9
    11 12 13 14
    16 17 18 19
    21 22 23 24
    26 27 28 29
*/

// Вариант 1
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m = 6;
    int n = 5;
    int k;
    cin >> k;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j + 1 == k)
                continue;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

/*
// Вариант 2
#include <iostream>

int main()
{
    int rows = 6;
    int cols = 5;
    int k;
    std::cin >> k;
    int **dynMatrix = new int *[rows];
    for (int i = 0; i < rows; ++i)
        dynMatrix[i] = new int[cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cin >> dynMatrix[i][j];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (j + 1 == k)
                continue;
            std::cout << dynMatrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < rows; ++i)
        delete[] dynMatrix[i];
    delete[] dynMatrix;
}
*/