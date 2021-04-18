// Խնդիր 04 Ենթաբառ.cpp

/* Գրել ծրագիր, որը մուտքում կստանա S բառը (ոչ ավել քան 20 սիմվոլ), ապա ևս մեկ C սիմվոլ։ Անհրաժեշտ է արտածել S բառում առաջին C սիմվոլից աջ ընկած ենթաբառը։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    abcdefghijk
    d

    Ելք
    efghijk
    ====== Թեստ #2 =======
    Մուտք
    abcd %

    Ելք

    ====== Թեստ #3 =======
    Մուտք
    123456789 9

    Ելք

    ====== Թեստ #4 =======
    Մուտք
    abcdabcd c

    Ելք
    dabcd
    ====== Թեստ #5 =======
    Մուտք
    12345678900987654321 0

    Ելք
    0987654321
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string c;
    cin >> c;
    int count = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == c[0])
        {
            ++i;
            for (int j = i; j < str.size(); ++j)
            {
                char str1 = str[j];
                cout << str[j];
            }
            break;
        }
    }
}