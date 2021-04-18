// Задача 10 близко  0.cpp

/* Написать программу, которая в входе получит N естественное число, а затем последовательность N, состоящая из целых элементов. Требуется отобразить два элемента последовательности, сумма которых ближе всего к 0. Если таковые имеются, то выводить их первыми. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    5 1 2 3 4 5

    Результат работы
    1 2
    ====== Тест #2 =======
    Входные данные
    10 -100 100 -753 999 -159 9 45 7 -8 -1

    Результат работы
    -100 100
    ====== Тест #3 =======
    Входные данные
    3 0 1 -2

    Результат работы
    0 1
    ====== Тест #4 =======
    Входные данные
    10 38 44 63 -51 -35 19 84 -69 4 -46

    Результат работы
    44 -46
*/

// Вариант 1
#include <iostream>
#include <cmath>

int main()
{
    unsigned size;
    int min;
    std::cin >> size;
    short* dynArr = new short[size];
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
// Вариант 2
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