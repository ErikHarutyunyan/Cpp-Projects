// Խնդիր 10  0-ին մոտ.cpp

/* Գրել ծրագիր, որը մուտքում կստանա N բնական թիվ, ապա հաջորդականություն N ամբողջ տարրերից կազմված։ Պահանջվում է արտածել հաջորդականության այն երկու տարրերը որոնց գումարն ամենամոտն է 0֊ին։ Այդպիսիք մի քանիսը լինելու դեպքում արտածել առաջինը։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    5 1 2 3 4 5

    Ելք
    1 2
    ====== Թեստ #2 =======
    Մուտք
    10 -100 100 -753 999 -159 9 45 7 -8 -1

    Ելք
    -100 100
    ====== Թեստ #3 =======
    Մուտք
    3 0 1 -2

    Ելք
    0 1
    ====== Թեստ #4 =======
    Մուտք
    10 38 44 63 -51 -35 19 84 -69 4 -46

    Ելք
    44 -46
*/

// Տարբերակ 1
#include <iostream>
#include <cmath>

int main()
{
    unsigned size;
    int min;
    std::cin >> size;
    short *dynArr = new short[size];
    for (int i = 0; i < size; i++)
        std::cin >> dynArr[i];
    int index_1 = 0, index_2 = 1, i, j;
    for (i = 0; i < size - 1; i++)
        for (j = i + 1; j < size; j++)
            if (fabs(0 - dynArr[i] - dynArr[j]) < fabs(0 - dynArr[index_1] - dynArr[index_2]))
            {
                index_1 = i;
                index_2 = j;
            }
    std::cout << dynArr[index_1] << " " << dynArr[index_2];
}

/*
// Տարբերակ 2
#include <iostream>
#include <cmath>
#include <vector>

int main()
{
    unsigned size;
    int min;
    std::cin >> size;
    std::vector<int> dynArr(size);
    for (int i = 0; i < dynArr.size(); i++)
        std::cin >> dynArr[i];
    int index_1 = 0, index_2 = 1, i, j;
    for (i = 0; i < dynArr.size() - 1; i++)
        for (j = i + 1; j < dynArr.size(); j++)
            if (fabs(0 - dynArr[i] - dynArr[j]) < fabs(0 - dynArr[index_1] - dynArr[index_2]))
            {
                index_1 = i;
                index_2 = j;
            }
    std::cout << dynArr[index_1] << " " << dynArr[index_2];
}
*/