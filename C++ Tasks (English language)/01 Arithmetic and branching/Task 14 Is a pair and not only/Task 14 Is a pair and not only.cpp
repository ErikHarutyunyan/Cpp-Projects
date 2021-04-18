// Task 14 is a pair and not only.cpp

/* Write a program that will get an integer in the input and will produce YES if this number is a pair and the separable remainder of 7 will remain 3 and NO otherwise*/

/*
	Examples
	====== Test #1 =======
	Input
	10

	Output
	YES

	====== Test #2 =======
	Input
	8

	Output
	NO

	====== Test #3 =======
	Input
	24

	Output
	YES

	====== Test #4 =======
	Input
	99

	Output
	NO

	====== Test #5 =======
	Input
	999470

	Output
	YES

	====== Test #6 =======
	Input
	999999

	Output
	NO

	====== Test #7 =======
	Input
	31

	Output
	NO

	====== Test #8 =======
	Input
	997

	Output
	NO
*/

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	if (a % 2 == 0 && a % 7 == 3)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}
