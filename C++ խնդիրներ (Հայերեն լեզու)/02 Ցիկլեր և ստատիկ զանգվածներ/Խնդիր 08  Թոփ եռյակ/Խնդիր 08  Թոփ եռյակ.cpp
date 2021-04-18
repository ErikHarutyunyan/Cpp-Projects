// Խնդիր 08  Թոփ եռյակ.cpp

/* Գրել ծրագիր, որը մուտքում ստանում է N (N ≥ 3) բնական թիվ, ապա հաջորդականություն N ամբողջ տարրերից կազմված։ Որպես արդյունք ծրագիրը պետք է արտածի հաջորդականության 3 ամենամեծ տարրերը։ Տարրերը պետք է արտածել փոքրից մեծ և տարանջատել բացատանիշներով։ Արգելվում է օգտագործել զանգված։ */

/*
	Օրինակներ
	====== Թեստ #1 =======
	Մուտք
	3 1 2 3

	Ելք
	1 2 3

	====== Թեստ #2 =======
	Մուտք
	5 2 -4 16 0 15

	Ելք
	2 15 16

	====== Թեստ #3 =======
	Մուտք
	101
	0
	1
	2
	3
	4
	5
	6
	7
	8
	9
	10
	11
	12
	13
	14
	15
	16
	17
	18
	19
	20
	21
	22
	23
	24
	25
	26
	27
	28
	29
	30
	31
	32
	33
	34
	35
	36
	37
	38
	39
	40
	41
	42
	43
	44
	45
	46
	47
	48
	49
	50
	51
	52
	53
	54
	55
	56
	57
	58
	59
	60
	61
	62
	63
	64
	65
	66
	67
	68
	69
	70
	71
	72
	73
	74
	75
	76
	77
	78
	79
	80
	81
	82
	83
	84
	85
	86
	87
	88
	89
	90
	91
	92
	93
	94
	95
	96
	97
	98
	99
	100

	Ելք
	98 99 100
*/

#include <iostream>
#include <limits>

int main()
{
	int N, first_max, second_max, third_max;
	first_max = std::numeric_limits<int>::min();
	second_max = first_max;
	third_max = first_max;
	std::cin >> N;
	if (N >= 3)
	{
		for (int i = 0; i < N; ++i)
		{
			int x;
			std::cin >> x;

			if (x > first_max)
			{
				third_max = second_max;
				second_max = first_max;
				first_max = x;
			}
			else if (x > second_max)
			{
				third_max = second_max;
				second_max = x;
			}
			else if (x > third_max)
			{
				third_max = x;
			}
		}
		std::cout << third_max << " " << second_max << " " << first_max << "\n";
	}
}
