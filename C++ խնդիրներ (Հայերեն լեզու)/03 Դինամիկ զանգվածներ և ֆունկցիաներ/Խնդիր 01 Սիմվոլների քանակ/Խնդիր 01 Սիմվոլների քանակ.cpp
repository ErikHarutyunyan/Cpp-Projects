// Խնդիր 01 Սիմվոլների քանակ.cpp

/* Գրել ծրագիր, որը մուտքում կստանա բառ (ոչ ավել քան 20 սիմվոլ), և կարտածի մուտքագրված սիմվոլների քանակը։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    Hello

    Ելք
    5
    ====== Թեստ #2 =======
    Մուտք
    abcd!@#$1234

    Ելք
    12
    ====== Թեստ #3 =======
    Մուտք
    012345678910

    Ելք
    12
    ====== Թեստ #4 =======
    Մուտք
    abcdefghij0123456789

    Ելք
    20
*/

#include <iostream>
using namespace std;

int main()
{
    const int lenght = 21;
    char str[lenght];
    cin >> str;
    int count = 0;
    for (int i = 0; i < lenght - 1; ++i)
    {
        if (str[i] == '\0')
        {
            break;
        }
        else
        {
            ++count;
        }
    }
    cout << count;
}
