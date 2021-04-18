// Задача 5 Предназначен.cpp

/* 
    Напишите программу, которая будет получать информацию о телевизорах N, на входе укажите название каждой модели телевизора, страну производства и страну продажи, затем страну производства телевизора А и страну продажи Б. В результате программы она должна произвести все модели телевизоров, которые производятся в стране А и продаются в Б. Если их нет, то на выходе появится сообщение  “Not found!" */

    // Опишите класс с именем TV, который будет иметь следующее:
    // .название модели телевизора
    // .страна происхождения
    // .страна продажи

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    3
    Sony Germany USA
    Sony Italy AUE
    LG Korea USA
    Germany
    USA

    Результат работы
    Sony

    ====== Тест #2 =======
    Входные данные
    3
    Sony Germany USA
    Sony Italy AUE
    LG Korea Armenia
    Italy
    Armenia

    Результат работы
    Not found!
*/

/*
// Вариант 1
#include <iostream>
#include <string>

class TV
{
public:
    int a;
    std::string mTvModel[40]{};
    std::string mMadeIn[40]{};
    std::string mCountryOfSale[40]{};
    std::string mCountry;
    std::string mSale;

    void print()
    {
        bool val = false;
        for (int j = 0; j < a; j++)
        {
            if (mCountry == mMadeIn[j] && mSale == mCountryOfSale[j])
            {
                std::cout << mTvModel[j] << "\n";
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
    std::string name, number, city, sale;
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
        tv.mCountryOfSale[i] += lineVariable[i];
    }
    std::cin >> city;
    tv.mCountry = city;
    std::cin >> sale;
    tv.mSale = sale;
    tv.print();
}
*/

// Вариант 2
#include <iostream>
#include <string>
#include <vector>

class TV
{
public:
    std::string model;
    std::string made_in;
    std::string sold_to;
};

int main()
{
    int n;
    std::cin >> n;
    std::vector<TV> tv(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> tv[i].model;
        std::cin >> tv[i].made_in;
        std::cin >> tv[i].sold_to;
    }

    std::string country1, country2;
    std::cin >> country1 >> country2;
    bool cityIsReachable = false;

    for (int i = 0; i < n; ++i)
    {
        if ((country1 == tv[i].made_in) && (country2 == tv[i].sold_to))
        {
            std::cout << tv[i].model << std::endl;
            cityIsReachable = true;
        }
    }
    if (!cityIsReachable)
    {
        std::cout << "Not found!";
    }
}