﻿// Задача 21 Факториал и Фибоначчи.cpp

/* Напишите программу, которая получит n (1 ≤ n ≤ 10) во входных данных и выдаст соотношение факториала входящего числа и n-го элемента последовательности Фибоначчи с точностью до 5 символов. Необходимо, чтобы функции подсчета числа факториалов и вычисления n-го элемента последовательности Фибоначчи были рекурсивными: */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    5

    Результат работы
    24.000000
    ====== Тест #2 =======
    Входные данные
    1

    Результат работы
    1.000000
    ====== Тест #3 =======
    Входные данные
    9

    Результат работы
    10672.941176
    ====== Тест #4 =======
    Входные данные
    7

    Результат работы
    387.692308
    ====== Тест #5 =======
    Входные данные
    10

    Результат работы
    65978.181818
*/

#include <iostream>
using namespace std;

unsigned factorial(unsigned n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

double fib(double n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

int main()
{
    double n;
    cin >> n;
    cout << fixed << factorial(n) / fib(n);
}