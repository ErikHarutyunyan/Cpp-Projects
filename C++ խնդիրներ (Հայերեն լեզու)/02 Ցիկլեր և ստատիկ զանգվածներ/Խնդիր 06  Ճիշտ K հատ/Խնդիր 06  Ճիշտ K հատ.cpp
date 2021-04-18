// Խնդիր 06  Ճիշտ K հատ.cpp

/* Պահանջվում է գրել ծրագիր, որը մուտքում կստանա N և K ոչ բացասական ամբողջ թվերը, ապա հաջորդականություն N ամբողջ տարրերից կազմված։ Ծրագիրը որպես արդյունք պետք է արտածի ՛YES՛ եթե N թվերից ճիշտ K հատը մեծ են կամ հավասար 123 ֊ից և ‘NO’ հակառակ դեպքում։ Արգելվում է օգտագործել զանգված։ */

/*
	Օրինակներ
	====== Թեստ #1 ====== =
	Մուտք
	3 2 123 100 140

	Ելք
	YES
	====== Թեստ #2 =======
	Մուտք
	0 5

	Ելք
	NO
*/

/*
// Տարբերակ 1
#include <iostream>

int main()
{
	unsigned int n, k, sum, i;
	i = 0;
	sum = 0;
	std::cin >> n;
	while (i <= n)
	{
		std::cin >> k;
		sum += k;
		i += 1;
	}
	if (sum >= 123)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}
*/

// Տարբերակ 2
#include <iostream>
int main()
{
	unsigned int n, k, sums, i;
	i = 0;
	sums = 0;
	std::cin >> n;
	std::cin >> k;
	for (int i = 0; i < n; ++i)
	{
		int x;
		std::cin >> x;
		if (x >= 123)
		{
			++sums;
		}
	}
	if (sums == k)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}