// Task 18 Decrease order.cpp

/* Write a program that will get 4 integers in the input and will produce YES if all the digits were entered in descending order and NO otherwise*/

/*
	Examples
	====== Test #1 =======
	Input
	4 3 2 1

	Output
	YES

	====== Test #2 =======
	Input
	4 3 2 5

	Output
	NO

	====== Test #3 =======
	Input
	1 10 9 8 7

	Output
	NO

	====== Test #4 =======
	Input
	5 5 5 5

	Output
	YES

	====== Test #5 =======
	Input
	200 150 200 150

	Output
	NO

	====== Test #6 =======
	Input
	-159 -160 -161 -160

	Output
	NO
*/

#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	if (a >= b && b >= c && c >= d)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}
