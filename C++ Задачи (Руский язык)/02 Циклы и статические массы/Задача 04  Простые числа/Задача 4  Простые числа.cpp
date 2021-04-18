// Задача 4  Простые числа.cpp

/* Напишите программу, которая получит все простые числа, которые были записаны перед этим числом на входе. Отображаемые числа должны быть разделены пробелом. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    2

    Результат работы
    2
    ====== Тест #2 =======
    Входные данные
    5

    Результат работы
    2 3 5
    ====== Тест #3 =======
    Входные данные
    15

    Результат работы
    2 3 5 7 11 13
    ====== Тест #4 =======
    Входные данные
    100

    Результат работы
    2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/

/*
// Вариант 1
#include <iostream>
using namespace std;

int main()
{
    int i = 2;
    int j = 2;
    int a;
    bool parz;
    cin >> a;
    while (a >= i)
    {
        parz = true;
        if (i != 2)
        {
            while (j < i - 1)
            {

                if (i % j == 0)
                {
                    parz = false;
                    j = 2;
                    break;
                }
                j++;
            }
        }
        if (parz)
        {
            cout << i << " ";
            j = 2;
        }
        i++;
    }
}
*/

/*
// Вариант 2
#include <iostream>

int main()
{
    int unsigned n;
    bool prime;
    std::cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        prime = true;
        if (n == 2)
        {
            std::cout << i << " ";
            break;
        }
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                prime = false;
            }
        }
        if (prime)
        {
            std::cout << i << " ";
        }
    }
}
*/

// Вариант 3
#include <iostream>

int main()
{
    int unsigned n;
    std::cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        int cur_num = i;
        bool prime = true;
        for (int j = 2; j * j <= cur_num; ++j)
        {
            if (cur_num % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            std::cout << cur_num << " ";
        }
    }
}