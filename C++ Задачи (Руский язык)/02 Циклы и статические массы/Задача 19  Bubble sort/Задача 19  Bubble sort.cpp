// Задача 19  Bubble sort.cpp

/* Требуется написать программу, которая получает естественное число N (n ≤ 1000) в входе, а затем последовательность N, состоящая из целых элементов. Необходимо, чтобы программа выстроила элементы последовательности в порядке убывания. Вычитаемые цифры должны быть разделены друг от друга на пробелом. При решении проблемы используйте массив и алгоритм bubble sort. */

/*
	Примеры
	====== Тест #1 =======
	Входные данные
	10 1 2 3 4 5 6 7 8 9 10

	Результат работы
	10 9 8 7 6 5 4 3 2 1
	====== Тест #2 =======
	Входные данные
	5 -1 8 -15 99 -100

	Результат работы
	99 8 -1 -15 -100
*/

//Вариант 1
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
//Вариант 2
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