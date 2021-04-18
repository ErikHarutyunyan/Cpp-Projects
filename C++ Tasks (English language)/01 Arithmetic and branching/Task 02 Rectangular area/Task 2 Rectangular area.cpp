// Task 2 Rectangular area.cpp

/* Write a program that will get the length of two sides of a rectangle in the input and produce this rectangular area. */

/*
	Examples
	====== Test #1 =======
	Input
	1 1

	Output
	1

	====== Test #2 =======
	Input
	2 4

	Output
	8

	====== Test #3 =======
	Input
	10 1010

	Output
	10100

	====== Test #4 =======
	Input
	123 123

	Output
	15129

	====== Test #5 =======
	Input
	15987 7532

	Output
	120414084

	====== Test #6 =======
	Input
	2147483647 2

	Output
	4294967294

	====== Test #7 =======
	Input
	680011776 4

	Output
	2720047104
*/

#include <iostream>

int main()
{
	long long length, width;
	std::cin >> length >> width;
	std::cout << length * width;
}
