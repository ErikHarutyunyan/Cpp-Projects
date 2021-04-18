// Task 17 Belongs to the range.cpp

/* You need to write a program that will get numbers in the input at the floating-point numbers A, B, C. as a result, the program must produce YES if A is in the range [B, C) and NO otherwise. It is known that B is smaller than C.*/

/*
	Examples
	====== Test #1 =======
	Input
	4 5 6

	Output
	NO

	====== Test #2 =======
	Input
	10 5 15

	Output
	YES

	====== Test #3 =======
	Input
	15 5 15

	Output
	NO

	====== Test #4 =======
	Input
	15.66 15.65 15.67

	Output
	YES

	====== Test #5 =======
	Input
	-1.125 -1.125 -1.1

	Output
	YES

	====== Test #6 =======
	Input
	145.145 10.145 145.145

	Output
	NO
*/
#include <iostream>

int main()
{
	double a, b, c;
	std::cin >> a >> b >> c;
	if (a >= b && a < c)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}
