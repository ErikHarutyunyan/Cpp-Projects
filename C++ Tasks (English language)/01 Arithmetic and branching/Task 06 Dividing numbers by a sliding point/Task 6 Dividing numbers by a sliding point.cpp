// Task 6 Dividing numbers by a sliding point.cpp

/* Write a program that will get the quotient obtained by dividing the first and second divisors by two sliding points.*/

/*
	Examples
	====== Test #1 =======
	Input
	1 2

	Output
	0.5

	====== Test #2 =======
	Input
	1 3

	Output
	0.333333

	====== Test #3 =======
	Input
	75 12

	Output
	6.25

	====== Test #4 =======
	Input: размер 121 ---
	145236 256145236 256145236 256145236 256145236 256145236 256145236 256145236 256145236 256145236 256145236 256145236 256

	Output
	0.000567006

	====== Test #5 =======
	Input
	-1 2

	Output
	-0.5

	====== Test #6 =======
	Input
	-1 -2

	Output
	0.5
*/

#include <iostream>
int main()
{
	double long a, b;
	std::cin >> a >> b;
	std::cout << a / b;
}