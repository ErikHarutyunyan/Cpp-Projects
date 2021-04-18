// Task 12 Bigger than two.cpp

/* Write a program that will get 2 positive integers in the input and will produce the largest of these digits */

/*
	Examples
	====== Test #1 =======
	Input
	1 5

	Output
	5

	====== Test #2 =======
	Input
	2 2

	Output
	2

	====== Test #3 =======
	Input
	0 789526

	Output
	789526

	====== Test #4 =======
	Input
	159874 4294967295

	Output
	4294967295

	====== Test #5 =======
	Input
	4294967295 4294967295

	Output
	4294967295
*/
#include <iostream>

int main()
{
	unsigned int a, b;
	std::cin >> a >> b;
	if (a > b)
	{
		std::cout << a;
	}
	else
	{
		std::cout << b;
	}
}
