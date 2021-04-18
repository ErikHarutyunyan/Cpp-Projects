// Task 1 Number of characters.cpp

/* Write a program that will receive a word in the input (no more than 20 characters), and will produce the number of characters entered. */

/*
    Examples
    ====== Test #1 =======
    Input
    Hello

    Output
    5
    ====== Test #2 =======
    Input
    abcd!@#$1234

    Output
    12
    ====== Test #3 =======
    Input
    012345678910

    Output
    12
    ====== Test #4 =======
    Input
    abcdefghij0123456789

    Output
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
