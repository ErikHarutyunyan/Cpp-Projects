// Задача 2 Отмеченный день.cpp

/* 
    Напишите программу, которая будет получать информацию о N рейсах на входе в город назначения каждого рейса, в день отправления поезда, затем название города M и D дней. В результате работы проекта, в ней должны быть отображены номера поездов, отправляющихся в город M в данный D день. Если нет, то выводится сообщение "Недоступный город!". */

    // Опишите класс под названием TRAIN, который имеет следующие поля.
    // .пункт назначения рейса - город
    // .день рейса
    // .номер поезда

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    2
    Yerevan I-156 15
    Gyumri I-200 10
    Gyumri 10

    Результат работы
    I-200

    ====== Тест #2 =======
    Входные данные
    2
    Yerevan I-156 15
    Gyumri I-200 10
    Gyumri 15

    Результат работы
    Unreachable city!

    ====== Тест #3 =======
    Входные данные
    2
    Gyumri I-156 15
    Gyumri I-200 15
    Gyumri 15

    Результат работы
    I-156
    I-200
*/

/*
// Вариант 1
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

// Вариант 2
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