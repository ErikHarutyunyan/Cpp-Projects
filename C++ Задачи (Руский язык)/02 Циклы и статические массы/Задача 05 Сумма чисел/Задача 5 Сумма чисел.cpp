// Задача 5 Сумма чисел.cpp

/* Требуется написать программу, которая будет получать целое число в записи, пока не будет введен 0. И сумма импортированных чисел будет отображаться. Запрещено использовать массу */

/*
	Примеры
	====== Тест #1 =======
	Входные данные
	1 0

	Результат работы
	1
	====== Тест #2 =======
	Входные данные
	5 -2 7 -11 0

	Результат работы
	-1
	====== Тест #3 =======
	Входные данные
	0

	Результат работы
	0
	====== Тест #4 =======
	Входные данные
	1 2 3 4 5 6 7 8 9 10 0

	Результат работы
	55
	====== Тест #5 =======
	Входные данные: размер 54 ---
	1 2 3 4 5 6 7 8 9 10 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10 0

	Результат работы
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
