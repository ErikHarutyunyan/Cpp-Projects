// Task 2 Anagrams.cpp

/* Write a program that will get the words S1 and S2 (no more than 20 characters) in the input և will display ‘YES’ if the entered words are anagrams and ‘NO’ otherwise. */

/*
    Examples
    ====== Test #1 =======
    Input
    alo
    ola

    Output
    YES
    ====== Test #2 =======
    Input
    coronavirus
    carnivorous

    Output
    YES
    ====== Test #3 =======
    Input
    ABCDE
    ABCDe

    Output
    NO
    ====== Test #4 =======
    Input
    ~!@#$%^&*()_+
    +_)(*&^%$#@!~

    Output
    YES
    ====== Test #5 =======
    Input
    0123456789
    9876543210

    Output
    YES
    ====== Test #6 =======
    Input
    abcde
    aabbccddee

    Output
    NO
    ====== Test #7 =======
    Input
    ASSA
    ASA

    Output
    NO
    ====== Test #8 =======
    Input
    cca
    acb

    Output
    NO
    ====== Test #9 =======
    Input
    hello
    heelo

    Output
    NO
    ====== Test #10 =======
    Input
    ad
    bc

    Output
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