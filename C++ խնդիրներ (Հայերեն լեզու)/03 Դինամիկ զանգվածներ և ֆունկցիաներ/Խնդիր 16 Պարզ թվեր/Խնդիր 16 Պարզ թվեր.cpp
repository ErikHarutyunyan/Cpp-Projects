// Խնդիր 16 Պարզ թվեր.cpp

/* Գրել ծրագիր, որը մուտքում կստանա դրական թիվ և կարտածի ‘YES՛ եթե այդ թիվը պարզ է և ‘NO’ հակառակ դեպքում։ Ստուգումը անհրաժեշտ է կատարել ֆունկցիայի միջոցով։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    2

    Ելք
    YES

    ====== Թեստ #2 =======
    Մուտք
    10

    Ելք
    NO
    ====== Թեստ #3 =======
    Մուտք
    31

    Ելք
    YES
    ====== Թեստ #4 =======
    Մուտք
    1

    Ելք
    NO
*/

#include <iostream>

bool is_prime(unsigned int n)
{
    if (n == 2)
        return true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
        else
            return true;
    }
}

int main()
{
    unsigned int a;
    std::cin >> a;
    if (is_prime(a))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}