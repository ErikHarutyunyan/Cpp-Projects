// Խնդիր 06 Սահող կետով թվերի բաժանում.cpp

/* Գրել ծրագիր, որը մուտքում կստանա 2 սահող կետով թիվ և կարտածի առաջինի և երկրորդի բաժանման արդյունքում ստացված քանորդը։ */

/*
	Օրինակներ
	====== Թեստ #1 =======
	Մուտք
	1 2

	Ելք
	0.5

	====== Թեստ #2 =======
	Մուտք
	1 3

	Ելք
	0.333333

	====== Թեստ #3 =======
	Մուտք
	75 12

	Ելք
	6.25

	====== Թեստ #4 =======
	Մուտք: размер 121 ---
	145236 256145236 256145236 256145236 256145236 256145236 256145236 256145236 256145236 256145236 256145236 256145236 256

	Ելք
	0.000567006

	====== Թեստ #5 =======
	Մուտք
	-1 2

	Ելք
	-0.5

	====== Թեստ #6 =======
	Մուտք
	-1 -2

	Ելք
	0.5
*/

#include <iostream>

int main()
{
	double long a, b;
	std::cin >> a >> b;
	std::cout << a / b;
}