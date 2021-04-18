// Задача 4 Требуемая модель.cpp

/* 
    Напишите программу, которая будет получать информацию о телевизорах N, на входе укажите название модели каждого телевизора, страну изготовления и длину диагонали, а затем название модели M. В результате программы, она должна выдать диагональные размеры всех указанных m-моделей телевизоров и страну изготовления. Если их нет, то выводится сообщение “Not found!". */

    // Опишите класс под названием TV, который будет иметь следующие поля:
    // .название модели ТВ
    // .страна происхождения
    // .длина диагонали

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    3
    Sony Germany 60
    Sony Italy 54
    LG Korea 58
    Sony

    Результат работы
    Germany 60
    Italy 54

    ====== Тест #2 =======
    Входные данные
    3
    Sony Germany 60
    Sony Italy 54
    LG Korea 58
    Samsung

    Результат работы
    Not found!
*/

// Вариант 1
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
// Вариант 2
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