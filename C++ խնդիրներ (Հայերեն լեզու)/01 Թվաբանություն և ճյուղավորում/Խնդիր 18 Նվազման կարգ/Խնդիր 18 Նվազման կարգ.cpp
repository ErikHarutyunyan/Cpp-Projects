// Задача 18 Порядок убывания.cpp

/* Գրել ծրագիր, որը մուտքում կստանա 4 ամբողջ թիվ և կարտածի YES, եթե բոլոր թվերը մուտքագրվել են նվազման կարգով և NO հակառակ դեպքում։ */

/*
	Օրինակներ
	====== Թեստ #1 =======
	Մուտք
	4 3 2 1

	Ելք
	YES

	====== Թեստ #2 =======
	Մուտք
	4 3 2 5

	Ելք
	NO

	====== Թեստ #3 =======
	Մուտք
	1 10 9 8 7

	Ելք
	NO

	====== Թեստ #4 =======
	Մուտք
	5 5 5 5

	Ելք
	YES

	====== Թեստ #5 =======
	Մուտք
	200 150 200 150

	Ելք
	NO

	====== Թեստ #6 =======
	Մուտք
	-159 -160 -161 -160

	Ելք
	NO
*/

#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	if (a >= b && b >= c && c >= d)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}
