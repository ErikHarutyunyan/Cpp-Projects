// Խնդիր 02  Անագրամ.cpp

/* Գրել ծրագիր, որը մուտքում կստանա S1 և S2 բառերը (ոչ ավել քան 20 սիմվոլ) և կարտածի ‘YES’, եթե մուտքագրված բառերը հանդիսանում են անագրամ և ‘NO’ հակառակ դեպքում: */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    alo
    ola

    Ելք
    YES
    ====== Թեստ #2 =======
    Մուտք
    coronavirus
    carnivorous

    Ելք
    YES
    ====== Թեստ #3 =======
    Մուտք
    ABCDE
    ABCDe

    Ելք
    NO
    ====== Թեստ #4 =======
    Մուտք
    ~!@#$%^&*()_+
    +_)(*&^%$#@!~

    Ելք
    YES
    ====== Թեստ #5 =======
    Մուտք
    0123456789
    9876543210

    Ելք
    YES
    ====== Թեստ #6 =======
    Մուտք
    abcde
    aabbccddee

    Ելք
    NO
    ====== Թեստ #7 =======
    Մուտք
    ASSA
    ASA

    Ելք
    NO
    ====== Թեստ #8 =======
    Մուտք
    cca
    acb

    Ելք
    NO
    ====== Թեստ #9 =======
    Մուտք
    hello
    heelo

    Ելք
    NO
    ====== Թեստ #10 =======
    Մուտք
    ad
    bc

    Ելք: размер 2 ---
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