// Task 5 Sum of sliding numbers.cpp

/* You need to write a program that will get four moving point digits in the input and will make the difference between the sums of the first two and the other two. */

/*
	Examples
	====== Test #1 =======
	Input
	4.5 3.5 1.75 2.25

	Output
	4

	====== Test #2 =======
	Input
	4.5 3.5 -1.75 -2.25

	Output
	12

	====== Test #3 =======
	Input
	-159.365 -852.153 458.015 782.126

	Output
	-2251.66

	====== Test #4 =======
	Input
	0 0 0 0

	Output
	0

	====== Test #5 =======
	Input
	1.99 1.01 1.52 1.48

	Output
	0
	Правильный ответ
	0

	====== Test #6 =======
	Input
	0.12345 0.87654 -0.44444 -0.55555

	Output
	1.99998
*/

#include <iostream>
int main()
{
	double long a, b, c, d;
	std::cin >> a >> b >> c >> d;
	std::cout << (a + b) - (c + d);
}