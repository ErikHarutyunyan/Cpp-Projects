// Task 13 Less than three.cpp

/* Write a program that will get 3 integers in the input and will produce less than these numbers*/

/*
	Examples
	====== Test #1 =======
	Input
	1 2 3

	Output
	1

	====== Test #2 =======
	Input
	-1 -2 -3

	Output
	-3

	====== Test #3 =======
	Input
	0 -7 45

	Output
	-7

	====== Test #4 =======
	Input
	45 45 44

	Output
	44

	====== Test #5 =======
	Input: размер 13 ---
	159 -159 159

	Output
	-159

	====== Test #6 =======
	Input
	2147483647 2147483647 2147483646

	Output: размер 10 ---
	2147483646

	====== Test #7 =======
	Input
	111 111 111

	Output
	111
*/

#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a <= b && a <= c)
	{
		std::cout << a;
	}
	else if (b <= a && b <= c)
	{
		std::cout << b;
	}
	else
	{
		std::cout << c;
	}
}
