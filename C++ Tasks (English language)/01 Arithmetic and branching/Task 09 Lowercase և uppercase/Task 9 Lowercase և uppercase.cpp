// Task 9 Lowercase և uppercase

/* Write a program that gets the number N in the input from the interval [1,      26] and outputs the number N in the Latin lowercase and uppercase letters       of the alphabet: */

/*
	Examples
	====== Test #1 =======
	Input
	1

	Output
	a A

	====== Test #2 =======
	Input
	2

	Output
	b B

	====== Test #3 =======
	Input
	3

	Output
	c C

	====== Test #4 =======
	Input
	10

	Output
	j J

	====== Test #5 =======
	Input
	26

	Output
	z Z

	====== Test #6 =======
	Input
	24

	Output
	x X
*/

#include <iostream>

int main()
{
	unsigned int n;
	std::cin >> n;
	char code = 'a' - 1 + n;
	char symbols = code - ('a' - 'A');
	std::cout << code << " " << symbols;
}