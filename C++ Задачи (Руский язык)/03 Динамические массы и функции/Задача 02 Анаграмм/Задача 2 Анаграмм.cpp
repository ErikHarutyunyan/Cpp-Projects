// Задача 02 Анаграмм.cpp

/* Напишите программу, которая будет вводить слова S1 և S2 (не более 20 символов) во вводе будет отображать «ДА», если введенные слова анонимны, «НЕТ» в противном случае. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    alo
    ola

    Результат работы
    YES
    ====== Тест #2 =======
    Входные данные
    coronavirus
    carnivorous

    Результат работы
    YES
    ====== Тест #3 =======
    Входные данные
    ABCDE
    ABCDe

    Результат работы
    NO
    ====== Тест #4 =======
    Входные данные
    ~!@#$%^&*()_+
    +_)(*&^%$#@!~

    Результат работы
    YES
    ====== Тест #5 =======
    Входные данные
    0123456789
    9876543210

    Результат работы
    YES
    ====== Тест #6 =======
    Входные данные
    abcde
    aabbccddee

    Результат работы
    NO
    ====== Тест #7 =======
    Входные данные
    ASSA
    ASA

    Результат работы
    NO
    ====== Тест #8 =======
    Входные данные
    cca
    acb

    Результат работы
    NO
    ====== Тест #9 =======
    Входные данные
    hello
    heelo

    Результат работы
    NO
    ====== Тест #10 =======
    Входные данные
    ad
    bc

    Результат работы: размер 2 ---
    NO
*/

#include <iostream>
using namespace std;

int main()
{
    const int lenght = 21;
    char str1[lenght];
    char str2[lenght];
    cin >> str1;
    cin >> str2;
    int count = 0;
    int count2 = 0;
    int len = 0;
    for (int i = 0; i < lenght - 1; ++i)
    {
        if (str1[i] == '\0')
            break;
        else
            ++count;

        if (str2[i] == '\0')
            break;
        else
            ++count2;
    }
    if (count == count2)
    {
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < count; j++)
            {
                if (str1[i] == str2[j])
                {
                    len++;
                    str2[j] = ' ';
                    break;
                }
            }
        }
        if (len == count)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
}