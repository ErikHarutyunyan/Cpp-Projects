// Խնդիր 02  Նշված օրը.cpp

/*  Գրել ծրագիր, որը մուտքում կստանա N չվերթների մասին տեղեկություն՝ յուրաքանչյուր չվերթի վերջնակետ-քաղաք, գնացքի համար և մեկնելու օր, ապա M քաղաքի անվանում և D օր։ Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի այն գնացքների համարները, որոնք տրված D օրը մեկնում են M քաղաքը։ Այդպիսիք չլինելուն դեպքում արտածել “Unreachable city!” հաղորդագրությունը։ */

    // Նկարագրել TRAIN անունով դաս, որն ունի հետևյալ դաշտերը.

    // .չվերթի վերջնակետ - քաղաք
    // .չվերթի օր
    //.գնացքի համարը

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    2
    Yerevan I-156 15
    Gyumri I-200 10
    Gyumri 10

    Ելք
    I-200

    ====== Թեստ #2 =======
    Մուտք
    2
    Yerevan I-156 15
    Gyumri I-200 10
    Gyumri 15

    Ելք
    Unreachable city!

    ====== Թեստ #3 =======
    Մուտք
    2
    Gyumri I-156 15
    Gyumri I-200 15
    Gyumri 15

    Ելք
    I-156
    I-200
*/

/*
// Տարբերակ 1
#include <iostream>
#include <string>

class TRAIN
{
public:
    int a;
    std::string mNameCity[40]{};
    std::string mTrainNumber[40]{};
    std::string mTrainHour[40]{};
    std::string mEndCity;
    std::string mEndHour;

    void print()
    {
        bool val = false;
        for (int j = 0; j < a; j++)
        {
            if (mEndCity == mNameCity[j] && mEndHour == mTrainHour[j])
            {
                std::cout << mTrainNumber[j] << "\n";
                val = true;
            }
        }
        if (!val)
            std::cout << "Unreachable city!";
    }
};

int main()
{
    TRAIN train;
    int n;
    std::string name, number, city, hour;
    std::cin >> n;
    const int p = 3 * n;
    std::string daysOfWeek[p]{};
    train.a = n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> daysOfWeek[i];
        train.mNameCity[i] += daysOfWeek[i];

        std::cin >> daysOfWeek[i];
        train.mTrainNumber[i] += daysOfWeek[i];

        std::cin >> daysOfWeek[i];
        train.mTrainHour[i] += daysOfWeek[i];
    }
    std::cin >> city;
    train.mEndCity = city;
    std::cin >> hour;
    train.mEndHour = hour;
    train.print();
}
*/

// Տարբերակ 2
#include <iostream>
#include <string>
#include <vector>

class Train
{
public:
    std::string city_name;
    std::string train_number;
    int day;
};

int main()
{
    int n;
    std::cin >> n;

    std::vector<Train> schedule(n);
    for (int i = 0; i < schedule.size(); ++i)
    {
        std::cin >> schedule[i].city_name >> schedule[i].train_number >> schedule[i].day;
    }

    std::string my_city;
    std::cin >> my_city;

    int my_day;
    std::cin >> my_day;
    bool cityIsReachable = false;

    for (int i = 0; i < schedule.size(); ++i)
    {
        if ((my_city == schedule[i].city_name) && (my_day == schedule[i].day))
        {
            std::cout << schedule[i].train_number << std::endl;
            cityIsReachable = true;
        }
    }
    if (!cityIsReachable)
    {
        std::cout << "Unreachable city!";
    }
}