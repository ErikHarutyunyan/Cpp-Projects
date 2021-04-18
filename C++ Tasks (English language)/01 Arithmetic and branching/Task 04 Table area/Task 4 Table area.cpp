// Task 4 Table area.cpp

/* You need to write a program that will get the base and height of a rectangular table in the entrance and count the area of this table. */

/*
	Examples
	====== Test #1 =======
	Input
	1 1 1

	Output
	1

	====== Test #2 =======
	Input
	2 1 1

	Output
	1.5

	====== Test #3 =======
	Input
	4 2 5

	Output
	15

	====== Test #4 =======
	Input
	4 3 15

	Output
	52.5

	====== Test #5 =======
	Input
	50 100 800

	Output
	60000

	====== Test #6 =======
	Input
	1258 78965 14785

	Output
	5.93049e+08

	====== Test #7 =======
	Input
	2290356220 4 2

	Output
	2.29036e+09
*/

#include <iostream>
int main()
{
	double long basis_one, basis_two, height;
	std::cin >> basis_one >> basis_two >> height;
	std::cout << (basis_one + basis_two) / 2 * height;
}