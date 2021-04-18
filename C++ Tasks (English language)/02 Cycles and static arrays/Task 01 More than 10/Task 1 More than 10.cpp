// Task 1 More than 10.cpp

/* Write down a program that will get a positive number at the input and give up to 10 integers. It is known that the input number will be at least 10. Displayed numbers should be separated by a space */

/*
	Examples
	====== Test #1 =======
	Input
	10

	Output
	10
	====== Test #2 =======
	Input
	15

	Output
	10 11 12 13 14 15
	====== Test #3 =======
	Input
	100

	Output
	10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
*/

#include <iostream>
int main()
{

	unsigned int x;
	int i = 10;
	std::cin >> x;

	while (i <= x)
	{
		std::cout << i << " ";
		i = i + 1;
	}
}