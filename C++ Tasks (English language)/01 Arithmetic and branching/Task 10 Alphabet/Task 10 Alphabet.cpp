// Task 10 Alphabet.cpp

/* Write a program that will count the number of letters in the English      alphabet*/

/*
	Examples
	====== Тест #1 =======
	Input

	Output
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