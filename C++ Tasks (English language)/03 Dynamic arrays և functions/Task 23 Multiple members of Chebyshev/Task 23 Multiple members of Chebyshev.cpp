// Task 23 Multiple members of Chebyshev.cpp

/* Write a program that finds the nth coefficient of a Chebyshev polynomial for n ≥ 0 integers and x given in the input. The polynomial Tn (x) of Chebyshev is defined by the following equation: Tn+1(x)=2xTn(x) − Tn−1(x)  */

/*
    Examples
    ====== Test #1 =======
    Input
    0 1.2

    Output
    1.000000

    ====== Test #2 =======
    Input
    1 5.7

    Output
    5.700000

    ====== Test #3 =======
    Input
    2 3.1

    Output
    18.220000

    ====== Test #4 =======
    Input
    0 88.9994

    Output
    1.000000

    ====== Test #5 =======
    Input
    1 -5.46

    Output
    -5.460000

    ====== Test #6 =======
    Input
    5 45.963

    Output
    3280233853.132830

    ====== Test #7 =======
    Input
    9 -2.33

    Output
    -331564.249256
*/

#include <iostream>
using namespace std;

double chebeshev(double n, double x)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else
        return 2 * x * chebeshev(n - 1, x) - chebeshev(n - 2, x);
}
int main()
{
    double n, x;
    cin >> n;
    cin >> x;
    cout << fixed << chebeshev(n, x) << endl;
}