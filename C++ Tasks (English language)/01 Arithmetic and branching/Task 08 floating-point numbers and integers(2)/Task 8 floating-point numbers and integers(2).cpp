// Task 8 floating-point numbers and integers(2)

/* It is required to write a program that will get the integers A and B at the input, then the numbers with the floating-point numbers C and D. As a result, the program must display the value of the expression A * C - B / D. It is known that D is not 0. */

/*
	Examples
	====== Test #1 =======
	Input
	3 10 0.111111 3

	Output
	-3

	====== Test #2 =======
	Input
	3 10 0.111111 -3

	Output
	3.66667
	
	====== Test #3 =======
	Input
	15 10 5 3

	Output
	71.6667
	
	====== Test #4 =======
	Input
	15 10 3 -3

	Output
	48.3333
	
	====== Test #5 =======
	Input
	-3 -10 0.111111 0.111111

	Output
	89.6668
*/

#include <iostream>

int main()
{
	int A, B;
	double C, D;
	std::cin >> A >> B >> C >> D;
	std::cout << A * C - B / D;
}