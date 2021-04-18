// Задача 15 Спираль.cpp

/* Напишите программу, которая построчно получит элементы матрицы 6x6. Необходимо спиралировать элементы матрицы, начиная с первого элемента матрицы. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    1   2  3  4  5 6
    20 21 22 23 24 7
    19 32 33 34 25 8
    18 31 36 35 26 9
    17 30 29 28 27 10
    16 15 14 13 12 11

    Результат работы
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36

    ====== Тест #2 =======
    Входные данные
    -1   -2  -3  -4  -5 -6
    -20 -21 -22 -23 -24 -7
    -19 -32 -33 -34 -25 -8
    -18 -31 -36 -35 -26 -9
    -17 -30 -29 -28 -27 -10
    -16 -15 -14 -13 -12 -11

    Результат работы
    -1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12 -13 -14 -15 -16 -17 -18 -19 -20 -21 -22 -23 -24 -25 -26 -27 -28 -29 -30 -31 -32 -33 -34 -35 -36
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows = 6;
    int cols = 6;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];
    }
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;
    while (1)
    {
        if (left > right)
            break;
        for (int i = left; i <= right; i++)
            cout << matrix[top][i] << " ";
        top++;

        if (top > bottom)
            break;
        for (int i = top; i <= bottom; i++)
            cout << matrix[i][right] << " ";
        right--;

        if (left > right)
            break;
        for (int i = right; i >= left; i--)
            cout << matrix[bottom][i] << " ";
        bottom--;

        if (top > bottom)
            break;
        for (int i = bottom; i >= top; i--)
            cout << matrix[i][left] << " ";
        left++;
    }
}