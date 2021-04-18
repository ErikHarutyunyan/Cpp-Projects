// Task 15 The second largest.cpp

/* Write a program that will get 3 integers in the entrance and will produce the second largest of these numbers. */

/*
	Examples
	====== Test #1 =======
	Input
	1 2 3

	Output
	2

	====== Test #2 =======
	Input
	-1 1 0

	Output
	0

	====== Test #3 =======
	Input
	10 100 10000

	Output
	100

	====== Test #4 =======
	Input
	-159 -158 -160

	Output
	-159

	====== Test #5 =======
	Input
	147 159 150

	Output
	150

	====== Test #6 =======
	Input
	3 2 1

	Output
	2

	====== Test #7 =======
	Input
	1 3 2

	Output
	2

	====== Test #8 =======
	Input
	3 1 2

	Output
	2

	====== Test #9 =======
	Input
	2 1 3

	Output
	2

	====== Test #10 =======
	Input
	2 3 1

	Output
	2
*/
#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	if ((a < b && b < c) || (a > b && b > c))
	{
		std::cout << b;
	}
	else if ((b < a && a < c) || (b > a && a > c))
	{
		std::cout << a;
	}
	else
	{
		std::cout << c;
	}
}