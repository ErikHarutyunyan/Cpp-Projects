// Խնդիր 16 Փոքր ASCII կոդ.cpp

/* Պահանջվում է գրել ծրագիր, որը մուտքում կստանա 2 սիմվոլ ASCII աղյուսակից և կարտածի YES, եթե երկրորդ սիմվոլն ունի ավելի փոքր ASCII կոդ քան առաջինը և NO հակառակ դեպքում։ Նույն սիմվոլների դեպքում արտածել EQUAL:*/

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    b a

    Ելք
    YES

    ====== Թեստ #2 =======
    Մուտք
    x y

    ====== Թեստ #3 =======
    Մուտք
    ^ ^

    Ելք
    EQUAL
*/

#include <iostream>

int main()
{
    char symbol_1, symbol_2;
    std::cin >> symbol_1 >> symbol_2;
    if (symbol_2 < symbol_1)
    {
        std::cout << "YES";
    }
    else if (symbol_1 == symbol_2)
    {
        std::cout << "EQUAL";
    }
    else
    {
        std::cout << "NO";
    }
}
