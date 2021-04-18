// Task 3 Remainder.cpp

/* Write a program that will get positive integers A and B at the input and will print the result remainder obtained by dividing A by B. It is known that B is not 0. */

/*
	Examples
	====== Test #1 =======
	Input
	7 5

	Output
	2
	
	====== Test #2 =======
	Input
	3 6

	Output
	3
	
	====== Test #3 =======
	Input
	20 10

	Output
	0
	
	====== Test #4 =======
	Input
	0 5

	Output
	0
	
	====== Test #5 =======
	Input
	2720047104 7896526

	Output
	3642160
	
	====== Test #6 =======
	Input
	10001000 1001

	Output
	9
*/

#include <iostream>
int main()
{
	long long a, b;
	std::cin >> a >> b;
	std::cout << a % b;
}