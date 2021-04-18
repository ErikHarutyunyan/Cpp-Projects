// Խնդիր 19 Պայմանով արտահայտություն.cpp

/* Պահանջվում է գրել ծրագիր, որը մուտքում կստանա A և B ամբողջ թվերը և O (+, -, *, /, %) գործողության նշանը։ Ծրագիրը որպես աշխատանքի արդյունք պետք է արտածի O գործողությունը կիրառված A և B թվերի նկատմամաբ։ Անհրաժեշտ է յուրաքանչյուր գործողության համար ստեղծել առանձին ֆունկցիա։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    10 20 +

    Ելք
    30
    ====== Թեստ #2 =======
    Մուտք
    -10 5 *

    Ելք
    -50
    ====== Թեստ #3 =======
    Մուտք
    5 10 %

    Ելք
    5
    ====== Թեստ #4 =======
    Մուտք
    -50 -10 /

    Ելք
    5
    ====== Թեստ #5 =======
    Մուտք
    -5000 -5000 -

    Ելք
    0
*/

#include <iostream>

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divv(int a, int b)
{
    return a / b;
}
int percen(int a, int b)
{
    return a % b;
}

int main()
{
    int a, b;
    char x;
    std::cin >> a >> b >> x;
    if (x == '+')
        std::cout << add(a, b);
    else if (x == '-')
        std::cout << sub(a, b);
    else if (x == '*')
        std::cout << mul(a, b);
    else if (x == '/')
        std::cout << divv(a, b);
    else if (x == '%')
        std::cout << percen(a, b);
}
