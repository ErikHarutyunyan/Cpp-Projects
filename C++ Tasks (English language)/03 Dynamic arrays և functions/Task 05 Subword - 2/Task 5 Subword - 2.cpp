// Task 5 Subword - 2.cpp

/* Write a program that gets the word S1 (no more than 20 characters) in the input, the word S2 (no more than the number of characters in the word S1) ‘will print‘ YES ’if S2 is a subword from S1 and NO ’otherwise. */

/*
    Examples
    ====== Test #1 =======
    Input
    abcdefgh
    abc

    Output
    YES
    ====== Test #2 =======
    Input
    abcd!@#$1234
    #$12

    Output
    YES
    ====== Test #3 =======
    Input
    abcdefg
    ABC

    Output
    NO
    ====== Test #4 =======
    Input
    12345678910
    10

    Output
    YES
    ====== Test #5 =======
    Input
    abcde1fbcdef
    bcdef

    Output
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