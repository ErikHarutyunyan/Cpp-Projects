// Task 4 Subword.cpp

/* Write a program that gets the word S in the input (no more than 20 characters), then one C character. It is necessary to display the sub-word to the right of the first C character in the word S. */

/*
    Examples
    ====== Test #1 =======
    Input
    abcdefghijk
    d

    Output
    efghijk
    ====== Test #2 =======
    Input
    abcd %

    Output

    ====== Test #3 =======
    Input
    123456789 9

    Output

    ====== Test #4 =======
    Input
    abcdabcd c

    Output
    dabcd
    ====== Test #5 =======
    Input
    12345678900987654321 0

    Output
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