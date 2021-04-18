// Task 2 Marked day.cpp

/* Write a program that will receive information about N flights at the entrance the destination-city of each flight, the day of departure for the train,, then the name of city M and D days. As a result of the project work, it should display the numbers of the trains that leave for city M on the given D day. If not, display "Unreachable city!" the message. */

// Describe a class called TRAIN that has the following fields.
// .flight destination - city
// .flight day
// .train number

/*
    Examples
    ====== Test #1 =======
    Input
    2
    Yerevan I-156 15
    Gyumri I-200 10
    Gyumri 10

    Output
    I-200

    ====== Test #2 =======
    Input
    2
    Yerevan I-156 15
    Gyumri I-200 10
    Gyumri 15

    Output
    Unreachable city!

    ====== Test #3 =======
    Input
    2
    Gyumri I-156 15
    Gyumri I-200 15
    Gyumri 15

    Output
    I-156
    I-200
*/

/*
// Option 1
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

// Option 2
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