// Խնդիր 04 Պահանջվող մոդել.cpp

/* Գրել ծրագիր, որը մուտքում կստանա N հեռուստացույցների մասին տեղեկություն՝ յուրաքանչյուր հեռուստացույցի մոդելի անուն, արտադրող երկիր և անկյունագծի երկարություն, ապա M մոդելի անվանումը։ Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի բոլոր տրված M մոդելի հեռուստացույցների անկյունագծի չափերը և արտադրող երկիրը։ Այդպիսիք չլինելուն դեպքում արտածել “Not found!” հաղորդագրությունը։ */

// Նկարագրել TV անունով դաս, որն կունենա հետևյալ դաշտերը.

// .TV մոդելի անուն
// .արտադրող երկիր
// .անկյունագծի երկարություն
/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    3
    Sony Germany 60
    Sony Italy 54
    LG Korea 58
    Sony

    Ելք
    Germany 60
    Italy 54

    ====== Թեստ #2 =======
    Մուտք
    3
    Sony Germany 60
    Sony Italy 54
    LG Korea 58
    Samsung

    Ելք
    Not found!
*/

// Տարբերակ 1
#include <iostream>
#include <string>
#include <vector>

class TV
{
public:
    std::string model;
    std::string country;
    int diagonal;
};

int main()
{
    int n;
    std::cin >> n;
    std::vector<TV> tv(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> tv[i].model;
        std::cin >> tv[i].country;
        std::cin >> tv[i].diagonal;
    }

    std::string my_model;
    std::cin >> my_model;
    bool cityIsReachable = false;

    for (int i = 0; i < n; ++i)
    {
        if (my_model == tv[i].model)
        {
            std::cout << tv[i].country << ' ' << tv[i].diagonal << std::endl;
            cityIsReachable = true;
        }
    }
    if (!cityIsReachable)
    {
        std::cout << "Not found!";
    }
}

/*
// Տարբերակ 2
#include <iostream>
#include <string>

class TV
{
public:
    int a;
    std::string mTvModel[40]{};
    std::string mMadeIn[40]{};
    std::string mTvInch[40]{};
    std::string mCountry;

    void print()
    {
        bool val = false;
        for (int j = 0; j < a; j++)
        {
            if (mCountry == mTvModel[j])
            {
                std::cout << mMadeIn[j] << " " << mTvInch[j] << "\n";
                val = true;
            }
        }
        if (!val)
            std::cout << "Not found!";
    }
};

int main()
{
    TV tv;
    int n;
    std::string name, number, country;
    std::cin >> n;
    const int p = 3 * n;
    std::string lineVariable[p]{};
    tv.a = 3 * n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> lineVariable[i];
        tv.mTvModel[i] += lineVariable[i];

        std::cin >> lineVariable[i];
        tv.mMadeIn[i] += lineVariable[i];

        std::cin >> lineVariable[i];
        tv.mTvInch[i] += lineVariable[i];
    }
    std::cin >> country;
    tv.mCountry = country;
    tv.print();
}
*/