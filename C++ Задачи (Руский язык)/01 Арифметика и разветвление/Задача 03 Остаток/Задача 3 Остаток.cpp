// Задача 3 Остаток.cpp

/* Написать программу, которая получит в входе целые положительные числа A и B и будет производить остаток, полученный в результате разделения A на B. Известно, что B не 0. */

/*
	Примеры
	====== Тест #1 =======
	Входные данные
	7 5

	Результат работы
	2
	
	====== Тест #2 =======
	Входные данные
	3 6

	Результат работы
	3
	
	====== Тест #3 =======
	Входные данные
	20 10

	Результат работы
	0
	
	====== Тест #4 =======
	Входные данные
	0 5

	Результат работы
	0
	
	====== Тест #5 =======
	Входные данные
	2720047104 7896526

	Результат работы
	3642160
	
	====== Тест #6 =======
	Входные данные
	10001000 1001

	Результат работы
	9
*/

#include <iostream>

int main()
{
	long long a, b;
	std::cin >> a >> b;
	std::cout << a % b;
}