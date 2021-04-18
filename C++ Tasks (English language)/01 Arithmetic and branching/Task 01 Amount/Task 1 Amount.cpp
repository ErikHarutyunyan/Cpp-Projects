// Task 1 Amount.cpp

/* Write a program that will get 2 integers in the input and subtract the sum of these numbers. */

/*
	Examples
	====== Test #1 =======
	Input
	1 1

	Output
	2

	====== Test #2 =======
	Input
	2 3

	Output
	5

	====== Test #3 =======
	Input
	5 5

	Output
	10

	====== Test #4 =======
	Input
	-1 -5

	Output
	-6

	====== Test #5 =======
	Input
	-123456789 -987654321

	Output
	-1111111110

	====== Test #6 =======
	Input
	-40 23

	Output
	-17

	====== Test #7 =======
	Input
	159753 258963

	Output
	418716

	====== Test #8 =======
	Input
	123456789 123456789

	Output
	246913578

	====== Test #9 =======
	Input
	2147483646 1

	Output
	2147483647

	====== Test #10 =======
	Input
	-2147483647 -1

	Output
	-2147483648
*/
#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << a + b;
}