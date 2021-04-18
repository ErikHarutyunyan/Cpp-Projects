﻿// Խնդիր 13 Երեքից փոքրը.cpp

/* Գրել ծրագիր, որը մուտքում կստանա 3 ամբողջ թիվ և կարտածի այդ թվերից փոքրը։ */

/*
	Օրինակներ
	====== Թեստ #1 =======
	Մուտք
	1 2 3

	Ելք
	1

	====== Թեստ #2 =======
	Մուտք
	-1 -2 -3

	Ելք
	-3

	====== Թեստ #3 =======
	Մուտք
	0 -7 45

	Ելք
	-7

	====== Թեստ #4 =======
	Մուտք
	45 45 44

	Ելք
	44

	====== Թեստ #5 =======
	Մուտք: размер 13 ---
	159 -159 159

	Ելք
	-159

	====== Թեստ #6 =======
	Մուտք
	2147483647 2147483647 2147483646

	Ելք: размер 10 ---
	2147483646

	====== Թեստ #7 =======
	Մուտք
	111 111 111

	Ելք
	111
*/

#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a <= b && a <= c)
	{
		std::cout << a;
	}
	else if (b <= a && b <= c)
	{
		std::cout << b;
	}
	else
	{
		std::cout << c;
	}
}
