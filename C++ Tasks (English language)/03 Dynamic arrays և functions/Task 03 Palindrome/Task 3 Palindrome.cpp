// Task 3 Palindrome.cpp

/* Write a program that will receive a word in the input (no more than 20 characters) and will display ‘YES’ if the entered word is a palindrome and otherwise ‘NO’. */

/*
    Examples
    ====== Test #1 =======
    Input
    abccba

    Output
    YES
    ====== Test #2 =======
    Input
    abcCBA

    Output
    NO
    ====== Test #3 =======
    Input
    12345678900987654321

    Output
    YES
    ====== Test #4 =======
    Input
    aaabbbcccdcccbbbaaa

    Output
    YES
    ====== Test #5 =======
    Input
    abcdabcd

    Output
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