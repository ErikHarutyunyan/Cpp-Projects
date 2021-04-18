// Խնդիր 05  Ենթաբառ ֊ 2.cpp

/* Գրել ծրագիր, որը մուտքում կստանա S1 բառը (ոչ ավել քան 20 սիմվոլ), S2 բառը (ոչ ավել քան S1 բառում սիմվոլների քանակը) և կարտածի ‘YES’, եթե S2 հանդիսանում է ենթաբառ S1֊ից և ‘NO’ հակառակ դեպքում: */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    abcdefgh
    abc

    Ելք
    YES
    ====== Թեստ #2 =======
    Մուտք
    abcd!@#$1234
    #$12

    Ելք
    YES
    ====== Թեստ #3 =======
    Մուտք
    abcdefg
    ABC

    Ելք
    NO
    ====== Թեստ #4 =======
    Մուտք
    12345678910
    10

    Ելք
    YES
    ====== Թեստ #5 =======
    Մուտք
    abcde1fbcdef
    bcdef

    Ելք
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