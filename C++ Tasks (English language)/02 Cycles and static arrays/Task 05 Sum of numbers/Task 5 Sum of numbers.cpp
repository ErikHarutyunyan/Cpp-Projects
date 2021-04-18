// Task 5 Sum of numbers.cpp

/* You need to write a program that will receive an integer in the entry until 0 is entered. And the sum of the imported numbers will be displayed. It is forbidden to use an array. */

/*
	Examples
	====== Test #1 =======
	Input
	1 0

	Output
	1
	====== Test #2 =======
	Input
	5 -2 7 -11 0

	Output
	-1
	====== Test #3 =======
	Input
	0

	Output
	0
	====== Test #4 =======
	Input
	1 2 3 4 5 6 7 8 9 10 0

	Output
	55
	====== Test #5 =======
	Input: размер 54 ---
	1 2 3 4 5 6 7 8 9 10 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10 0

	Output
	0
*/

#include <iostream>

int main()
{
	int n, sum;
	sum = 0;
	while (true)
	{
		std::cin >> n;
		if (n == 0)
		{
			break;
		}
		else
		{
			sum += n;
		}
	}
	std::cout << sum;
}
