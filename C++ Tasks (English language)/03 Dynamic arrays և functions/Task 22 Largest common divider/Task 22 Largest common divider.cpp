// Task 22 Largest common divider.cpp

/* Write a program that gets two natural numbers at the input of their greatest common divisor. It is necessary to solve the problem by means of a recursive function. */

/*
    Examples
    ====== Test #1 =======
    Input
    5 3

    Output
    1

    ====== Test #2 =======
    Input
    157 8923

    Output
    1

    ====== Test #3 =======
    Input
    26 39

    Output
    13

    ====== Test #4 =======
    Input
    64 127

    Output
    1

    ====== Test #5 =======
    Input
    999999 9999

    Output
    99

    ====== Test #6 =======
    Input
    1234 24680

    Output
    1234

    ====== Test #7 =======
    Input
    1000000000 9990

    Output
    10

    ====== Test #8 =======
    Input
    12121212 81818181

    Output
    3030303

    ====== Test #9 =======
    Input
    981678 134618976

    Output
    6

    ====== Test #10 =======
    Input
    347893773 734897894

    Output
    1

    ====== Test #11 =======
    Input
    1000000000 1000000000

    Output
    1000000000

    ====== Test #12 =======
    Input
    999999999 444444444

    Output
    111111111

    ====== Test #13 =======
    Input
    132 144

    Output
    12

    ====== Test #14 =======
    Input
    31225 625

    Output
    25

    ====== Test #15 =======
    Input
    1024 65536

    Output
    1024
*/

// Option 1
#include <iostream>
using namespace std;

int nod(int a, int b)
{
    if (a == b)
        return a;

    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    return nod(a, b - a);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << nod(a, b) << endl;
}

/*
// Option 2
#include <iostream>
using namespace std;

int nod(int a, int b)
{
    if (max(a, b) % min(a, b) == 0)
        return min(a, b);
    nod(max(a, b) % min(a, b), min(a, b));
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << nod(a, b) << endl;
}
*/