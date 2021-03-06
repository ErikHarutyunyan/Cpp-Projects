// Задача 13  Сначала негативы.cpp

/* Требуется написать программу, которая получает естественное число N (n ≤ 1000) в входе, а затем последовательность N, состоящая из целых элементов. Необходимо, чтобы программа сначала использовала отрицательные элементы последовательности, а затем не негативные. Вычитаемые цифры должны быть разделены друг от друга на пробелом. При решении проблемы использовать массив. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    4 0 -2 6 -8

    Результат работы
    -2 -8 0 6
    ====== Тест #2 =======
    Входные данные
    10 1 2 3 4 5 6 7 8 9 10

    Результат работы
    1 2 3 4 5 6 7 8 9 10
    ====== Тест #3 =======
    Входные данные
    3 -1 -2 -3

    Результат работы
    -1 -2 -3
    ====== Тест #4 =======
    Входные данные
    0

    Результат работы
*/

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int tmp;
    int arr[1000]{};
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] >= 0)
                {
                    tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}