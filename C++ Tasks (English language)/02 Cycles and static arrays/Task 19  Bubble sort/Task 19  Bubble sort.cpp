// Task 19  Bubble sort.cpp

/* You need to write a program that gets a natural number N (n ≤ 1000) in the input, followed by a sequence N consisting of integer elements. You need to have the program build the elements of a sequence in descending order. The numbers to be subtracted must be separated from each other by space. When solving the problem, use the array and the bubble sort algorithm. */

/*
	Examples
	====== Test #1 =======
	Input
	10 1 2 3 4 5 6 7 8 9 10

	Output
	10 9 8 7 6 5 4 3 2 1
	====== Test #2 =======
	Input
	5 -1 8 -15 99 -100

	Output
	99 8 -1 -15 -100
*/

// Option 1
#include <iostream>

int main()
{
	int N;
	int arr[1000]{};
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> arr[i];
	}
	bool swapped = false;
	do
	{
		swapped = false;
		for (int i = 0; i < N - 1; ++i)
		{
			if (arr[i] < arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = true;
			}
		}
	} while (swapped);

	for (int i = 0; i < N; ++i)
	{
		std::cout << arr[i] << " ";
	}
}

/*
// Option 2
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int arr[1000]{};
	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << arr[i] << " ";
	}
}
*/