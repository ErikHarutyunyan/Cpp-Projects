// Task 6 Exactly K*pieces.cpp

/* You need to write a program that will get non-negative integers N and K in the input, and then a sequence Of n integers. The program should produce "YES" as a result if the exact K of n numbers is greater than or equal to 123 and " NO " otherwise. You can't use an array. */

/*
	Examples
	====== Test #1 ====== =
	Input
	3 2 123 100 140

	Output
	YES
	====== Test #2 =======
	Input
	0 5

	Output
	NO
*/

/*
// Option 1
#include <iostream>

int main()
{
	unsigned int n, k, sum, i;
	i = 0;
	sum = 0;
	std::cin >> n;
	while (i <= n)
	{
		std::cin >> k;
		sum += k;
		i += 1;
	}
	if (sum >= 123)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}
*/

// Option 2
#include <iostream>
int main()
{
	unsigned int n, k, sums, i;
	i = 0;
	sums = 0;
	std::cin >> n;
	std::cin >> k;
	for (int i = 0; i < n; ++i)
	{
		int x;
		std::cin >> x;
		if (x >= 123)
		{
			++sums;
		}
	}
	if (sums == k)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}