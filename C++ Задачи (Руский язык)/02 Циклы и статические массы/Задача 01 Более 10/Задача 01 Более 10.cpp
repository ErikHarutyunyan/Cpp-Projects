// Задача 01 Более 10.cpp

/* Запишите программу, которая получит положительную цифру на входе и выдаст до 10 целых чисел. Известно, что входное число будет не меньше 10. Отображаемые числа должны быть разделены пробелом */

/*
	Примеры
	====== Тест #1 =======
	Входные данные
	10

	Результат работы
	10
	====== Тест #2 =======
	Входные данные
	15

	Результат работы
	10 11 12 13 14 15
	====== Тест #3 =======
	Входные данные
	100

	Результат работы
	10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
*/

#include <iostream>

int main()
{
	unsigned int x;
	int i = 10;
	std::cin >> x;

	while (i <= x)
	{
		std::cout << i << " ";
		i = i + 1;
	}
}