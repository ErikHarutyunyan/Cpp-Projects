// Task 3 Multiples of range 7.cpp

/* You need to write a program that will get the input integers A and B and will produce the number of all numbers in the range [A, B], which are divisible by 7 without remainder */

/*
	Examples
	====== Test #1 =======
	Input
	7 13

	Output
	1
	====== Test #2 =======
	Input
	5 21

	Output
	3
	==== Test #3 =======
	Input
	-8 -5

	Output
	1
	====== Test #4 =======
	Input
	-100000 100000

	Output
	28571
*/

#include <iostream>

int main()
{
	int a, b, quantity;
	quantity = 0;
	std::cin >> a >> b;

	while (b >= a)
	{
		if (a % 7 == 0)
		{
			quantity += 1;
		}
		a += 1;
	}
	std::cout << quantity;
}