// Խնդիր 19 Պայմանով արտահայտություն.cpp

/* Գրել ծրագիր, որը մոտքում կստանա A, B, C և D ամբողջ թվերը։ Պահանջվում է արտածել A և D թվերի արտադրյալի ու B և C թվերի գումարի տարբերությունը, եթե A-ն գերազանցում է C֊ն։ B և D թվերի գումարի և A֊ի արտադրյալը, եթե C-ն գերազանցում է A֊ն: Հակառակ դեպքում բոլոր չորս թվերի գումարը։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    9 3 10 5

    Ելք
    72

    ====== Թեստ #2 =======
    Մուտք
    10 3 10 5

    Ելք
    28

    ====== Թեստ #3 =======
    Մուտք
    10 3 9 5

    Ելք
    38

    ====== Թեստ #4 =======
    Մուտք
    100 400 258 100

    Ելք
    50000

    ====== Թեստ #5 =======
    Մուտք
    -100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100-100 -100 -101 -100

    Ելք
    10201

    ====== Թեստ #6 =======
    Մուտք
    1598 7539 1598 7539

    Ելք
    18274
*/

#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (a > c)
    {
        std::cout << (a * d) - (b + c);
    }
    else if (c > a)
    {
        std::cout << (b + d) * a;
    }
    else
    {
        std::cout << a + b + c + d;
    }
}
