// Task 7 floating-point numbers and integers.cpp

/* Write a program that gets the input of 3 integers and 1 floating-point numbers. The program as a result should set out the sum of integers and the part obtained by dividing the number into a floating-point numbers. It is known that the floating-point numbers is not equal to 0.*/

/*
	Examples
	====== Test #1 =======
	Input
	1 2 3 0.5

	Output
	12

	====== Test #2 =======
	Input
	1 3 8 2.5

	Output
	4.8

	====== Test #3 =======
	Input
	75 12 -80 3.5

	Output
	2

	====== Test #4 =======
	Input
	-1 2 1 1.5

	Output
	1.33333

	====== Test #5 =======
	Input
	-1 -2 6 -2.5

	Output
	-1.2
*/

#include <iostream>

int main()
{
	int a, b, c;
	double d;
	std::cin >> a >> b >> c >> d;
	std::cout << (a + b + c) / d;
}
