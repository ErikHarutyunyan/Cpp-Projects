// Խնդիր 04  Պարզ թվեր.cpp

/* Գրել ծրագիր, որը մուտքում կստանա դրական թիվ և կարտածի մինչև այդ թիվը եղած բոլոր պարզ թվերը։ Արտածվող թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով: */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    2

    Ելք
    2
    ====== Թեստ #2 =======
    Մուտք
    5

    Ելք
    2 3 5
    ====== Թեստ #3 =======
    Մուտք
    15

    Ելք
    2 3 5 7 11 13
    ====== Թեստ #4 =======
    Մուտք
    100

    Ելք
    2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/

/*
// Տարբերակ 1
#include <iostream>
using namespace std;

int main()
{
    int i = 2;
    int j = 2;
    int a;
    bool parz;
    cin >> a;
    while (a >= i)
    {
        parz = true;
        if (i != 2)
        {
            while (j < i - 1)
            {

                if (i % j == 0)
                {
                    parz = false;
                    j = 2;
                    break;
                }
                j++;
            }
        }
        if (parz)
        {
            cout << i << " ";
            j = 2;
        }
        i++;
    }
}
*/

/*
// Տարբերակ 2
#include <iostream>

int main()
{
    int unsigned n;
    bool prime;
    std::cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        prime = true;
        if (n == 2)
        {
            std::cout << i << " ";
            break;
        }
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                prime = false;
            }
        }
        if (prime)
        {
            std::cout << i << " ";
        }
    }
}
*/

// Տարբերակ 3
#include <iostream>

int main()
{
    int unsigned n;
    std::cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        int cur_num = i;
        bool prime = true;
        for (int j = 2; j * j <= cur_num; ++j)
        {
            if (cur_num % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            std::cout << cur_num << " ";
        }
    }
}