// Задача 3 Палиндром.cpp

/* Написать программу, которая получит слово (не более 20 символов) в входе и произнесет "YES", если введенное слово-палиндром и " NO " в противном случае */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    abccba

    Результат работы
    YES
    ====== Тест #2 =======
    Входные данные
    abcCBA

    Результат работы
    NO
    ====== Тест #3 =======
    Входные данные
    12345678900987654321

    Результат работы
    YES
    ====== Тест #4 =======
    Входные данные
    aaabbbcccdcccbbbaaa

    Результат работы
    YES
    ====== Тест #5 =======
    Входные данные
    abcdabcd

    Результат работы
    NO
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.size() / 2; ++i)
    {
        if (str[i] == str[str.size() - 1 - i])
            ++count;
        else
            break;
    }
    if (str.size() / 2 == count)
        cout << "YES";
    else
        cout << "NO";
}