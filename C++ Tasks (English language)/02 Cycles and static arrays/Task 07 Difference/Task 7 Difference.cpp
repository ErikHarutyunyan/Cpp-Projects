// Task 7 Difference.cpp

/* Write a program that gets a natural number N at the input, then a sequence of whole N elements. As a result, the program must display the difference between the largest and smallest elements of the sequence. Solve the problem without using array. */

/*
	Examples
	====== Test #1 ====== =
	Input
	1 5

	Output
	0
	====== Test #2 =======
	Input
	10 1 2 3 4 5 6 7 8 9 10

	Output
	9
	====== Test #3 =======
	Input
	10 10 9 8 7 6 5 4 3 2 1

	Output
	9
	===== Test #4 =======
	Input
	10 -1 -2 -3 -4 -5 5 4 3 2 1

	Output
	10
*/

#include <iostream>
#include <limits>

int main()
{
	int N, max, min;
	max = std::numeric_limits<int>::min();
	min = std::numeric_limits<int>::max();
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{

		int x;
		std::cin >> x;

		if (x > max)
		{
			max = x;
		}
		if (x < min)
		{
			min = x;
		}
	}
	std::cout << max - min << "\n";
}
