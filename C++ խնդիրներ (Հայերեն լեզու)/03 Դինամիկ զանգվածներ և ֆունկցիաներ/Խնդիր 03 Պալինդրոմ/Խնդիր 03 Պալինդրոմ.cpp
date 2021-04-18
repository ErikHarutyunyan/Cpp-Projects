// Խնդիր 03 Պալինդրոմ.cpp

/* Գրել ծրագիր, որը մուտքում կստանա բառ (ոչ ավել քան 20 սիմվոլ) և կարտածի ‘YES’, եթե մուտքագրված բառը պալինդրոմ է և ‘NO’ հակառակ դեպքում: */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    abccba

    Ելք
    YES
    ====== Թեստ #2 =======
    Մուտք
    abcCBA

    Ելք
    NO
    ====== Թեստ #3 =======
    Մուտք
    12345678900987654321

    Ելք
    YES
    ====== Թեստ #4 =======
    Մուտք
    aaabbbcccdcccbbbaaa

    Ելք
    YES
    ====== Թեստ #5 =======
    Մուտք
    abcdabcd

    Ելք
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