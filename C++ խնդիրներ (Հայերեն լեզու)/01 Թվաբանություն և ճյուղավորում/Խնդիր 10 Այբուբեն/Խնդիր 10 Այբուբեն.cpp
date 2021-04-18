// Խնդիր 10 Այբուբեն.cpp

/* Գրել ծրագիր, որը կհաշվի և կարտածի անգլերեն լեզվի այբուբենի տառերի քանակը։ */

/*
	Օրինակներ
	====== Թեստ #1 =======
	Մուտք

	Ելք
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