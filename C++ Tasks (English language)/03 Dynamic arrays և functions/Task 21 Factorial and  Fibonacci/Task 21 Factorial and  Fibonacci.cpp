// Task 21 Factorial and  Fibonacci.cpp.cpp

/* Write a program that will get n (1 ≤ n ≤ 10) in the input and will produce the ratio of the factorial of the incoming number and the nth element of the Fibonacci sequence with an accuracy of 5 characters. It is necessary that the functions of counting the number of factorials and calculating the nth element of the Fibonacci sequence are recursive: */

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