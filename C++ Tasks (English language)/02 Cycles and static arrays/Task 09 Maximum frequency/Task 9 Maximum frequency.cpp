// Task 9 Maximum frequency.cpp

/* Write a program that gets an N-negative integer in the input, followed by a sequence Of n integers.  As a result, the program must display the maximum number of meetings of elements in the sequence. You can't use an array. */

/*
	Examples
	====== Test #1 =======
	Input
	0

	Output
	0
	====== Test #2 =======
	Input
	5 2 6 6 3 -5

	Output
	2
	====== Test #3 =======
	Input
	10 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

	Output
	10
*/

#include <iostream>
#include <limits>
int main()
{
	int unsigned N, qount;
	long max;
	qount = 1;
	max = std::numeric_limits<long>::min();
	std::cin >> N;
	if (N == 0)
	{
		std::cout << 0;
	}
	else
	{
		for (int i = 0; i < N; ++i)
		{
			int x;
			std::cin >> x;

			if (x > max)
			{
				max = x;
			}

			else if (x == max)
			{
				++qount;
			}
		}

		std::cout << qount << "\n";
	}
}
