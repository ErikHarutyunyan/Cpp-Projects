// Задача 10 Алфавит.cpp

/* Написать программу, которая будет подсчитывать и производить количество букв алфавита английского языка. */

/*
	Примеры
	====== Тест #1 =======
	Входные данные

	Результат работы
	26
*/

#include <iostream>

int main()
{
	unsigned int n;
	std::cin >> n;
	char code = 'a' - 1 + n;
	char code_2 = 'a' - 1 + n - ('a' - 'A');
	std::cout << code << " " << code_2;
}