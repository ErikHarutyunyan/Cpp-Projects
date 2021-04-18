// Задача 18 Самое большое отрицательное число.cpp

/* Требуется написать программу, в которой запись получает n (n ≤ 1000) естественное число, то a1, a2, a3,... последовательность целых чисел и будет производить самое большое отрицательное число и его подсчет, если не таковые "0 -1". При решении проблемы использовать массив. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    4 4 3 2 1

    Результат работы
    0 -1
    ====== Тест #2 =======
    Входные данные
    4 10 3 -1 5

    Результат работы
    -1 2
    ====== Тест #3 =======
    Входные данные
    5 15 1478 -5 -478 -12

    Результат работы
    -5 2
*/

// Вариант 1
#include <iostream>

int main()
{
    int n;
    int arr[1000];
    int index = -1;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 && index == -1)
        {
            index = i;
        }
        else if (arr[i] < 0 && arr[i] > arr[index])
        {
            index = i;
        }
    }

    if ((arr[index] > -1))
    {
        std::cout << 0 << ' ' << -1;
    }
    else
    {
        std::cout << arr[index] << ' ' << index;
    }
}

/*
// Вариант 2
#include <iostream>

int main()
{
    int index, i, N, x;
    x = 0;
    int arr[1000]{};
    std::cin >> N;
    for (i = 0; i < N; i++)
    {
        std::cin >> arr[i];
    }
    index = -1;
    for (i = 0; i < N; i++)
    {
        if (arr[i] < 0 && index == -1)
        {
            index = i;
            x = arr[i];
        }
        else if (arr[i] < 0 && arr[i] > arr[index])
        {
            index = i;
            x = arr[index];
        }
        else
        {
            // arr[index]=-1;
        }
    }
    std::cout << x << " " << index;
}
*/