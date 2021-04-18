// Task 24 Recurrent sequence.cpp

/* Given a recursive sequence Kn, whose Ki element is defined by the following rules ․
   . Ki = i, if i ≤ 3:
   . Ki = 2 * Ki + 3, if i is odd and i> 3
   . Ki = 3 + Ki / 2, if i is a pair and i> 3
     Write a program that will get the natural number i (i ≤ 1000000000) at the input and will be the i element of the sequence.
*/

/*
    Examples
    ====== Test #1 =======
    Input
    1

    Output
    1
    ====== Test #2 =======
    Input
    2

    Output
    2
    ====== Test #3 =======
    Input
    3

    Output
    3
    ====== Test #4 =======
    Input
    4

    Output
    5
    ====== Test #5 =======
    Input
    5

    Output
    16
    ====== Test #6 =======
    Input
    6

    Output
    6
    ====== Test #7 =======
    Input
    7

    Output
    38
    ====== Test #8 =======
    Input
    8

    Output
    8
    ====== Test #9 =======
    Input
    9

    Output
    18
    ====== Test #10 =======
    Input
    1000000000

    Output
    11173
    ====== Test #11 =======
    Input
    999999999

    Output
    272142
    ====== Test #12 =======
    Input
    805306365

    Output
    174
    ====== Test #13 =======
    Input
    358590891

    Output
    43266
    ====== Test #14 =======
    Input
    146406684

    Output
    71400
    ====== Test #15 =======
    Input
    762299094

    Output
    723549
    ====== Test #16 =======
    Input
    462648445

    Output
    16010
    ====== Test #17 =======
    Input
    227918266

    Output
    19445
    ====== Test #18 =======
    Input
    995168599

    Output
    365534
    ====== Test #19 =======
    Input
    623271450

    Output
    129555
    ====== Test #20 =======
    Input
    319571912

    Output
    72785
*/

#include <iostream>
using namespace std;

unsigned long long sequence(int i)
{
    if (i <= 3)
        return i;
    if (i % 2 == 1)
        return 2 * sequence(i + 3);
    if (i % 2 == 0)
        return 3 + sequence(i / 2);
}
int main()
{
    unsigned long long i;
    cin >> i;
    cout << sequence(i);
}