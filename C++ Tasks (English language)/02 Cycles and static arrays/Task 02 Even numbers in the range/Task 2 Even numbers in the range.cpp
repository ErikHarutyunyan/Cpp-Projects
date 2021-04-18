// Task 2 Even numbers in the range.cpp

/* Write a program that will get the integers A and B at the input and will display all even numbers in the range [A, B]. The numbers displayed must be separated by a space. */

/*
	Examples
	====== Test #1 =======
	Input
	4 4

	Output
	4
	====== Test #2 =======
	Input
	1 5

	Output
	2 4
	====== Test #3 =======
	Input
	-7 -6

	Output
	-6
*/

#include <iostream>

int main()
{

	int a, b;
	std::cin >> a >> b;

	while (b >= a)
	{
		if (a % 2 == 0)
		{
			std::cout << a << " ";
		}
		a += 1;
	}
}
