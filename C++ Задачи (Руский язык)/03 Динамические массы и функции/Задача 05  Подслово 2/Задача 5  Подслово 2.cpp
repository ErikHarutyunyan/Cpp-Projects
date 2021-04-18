// Задача 5  Подслово 2.cpp

/* Напишите программу, которая получает слово S1 (не более 20 символов) на входе, слово S2 (не более, чем количество символов в слове S1) напечатает ‘ YES ’, если S2 является подсловом из S1 и ‘ NO ’в противном случае. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    abcdefgh
    abc

    Результат работы
    YES
    ====== Тест #2 =======
    Входные данные
    abcd!@#$1234
    #$12

    Результат работы
    YES
    ====== Тест #3 =======
    Входные данные
    abcdefg
    ABC

    Результат работы
    NO
    ====== Тест #4 =======
    Входные данные
    12345678910
    10

    Результат работы
    YES
    ====== Тест #5 =======
    Входные данные
    abcde1fbcdef
    bcdef

    Результат работы
    YES
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    int count = 0;
    int k = 0;
    for (int i = 0; i < str1.size(); ++i)
    {
        for (int j = 0; j < str1.size(); ++j)
        {
            if (str1[j] == str2[k])
            {
                ++count;
                ++k;
            }
        }
        break;
    }
    if (count == str2.size())
        cout << "YES";
    else
        cout << "NO";
}