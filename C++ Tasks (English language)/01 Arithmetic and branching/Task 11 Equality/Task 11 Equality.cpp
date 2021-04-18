// Task 11 Equality.cpp

/* Write a program that will get 2 positive integers in the input and will produce YES if these numbers are equal and NO otherwise */

/*
	Examples
	====== Test #1 =======
	Input
	1 1

	Output
	YES

	====== Test #2 =======
	Input
	4 5

	Output
	NO

	====== Test #3 =======
	Input
	0 789526

	Output
	NO

	====== Test #4 =======
	Input
	159874 159874159874

	Output
	NO

	====== Test #5 =======
	Input
	4294967295 4294967295

	Output
	YES
*/
#include <iostream>

int main()
{

	unsigned int a, b;
	std::cin >> a >> b;

	if (a == b)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}
