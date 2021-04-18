// Task 3 Transit.cpp 

/* Write a program that will get information about flights N at the entrance the starting point of each flight is the city, the end point is the city and the name of the city A, B, and C. As a result of the program, it should produce pairs of flight numbers, the first train of the pair should go from A to B, and the second-from B to C. Flight numbers must be displayed in the same order as they were entered ․ If not, display "Unreachable city!" Message */

//  Describe a class called TRAIN that has the following fields.
// .flight starting point - city
// .flight end point - city
// .train number

/*
    Examples
    ====== Test #1 =======
    Input
    3
    Yerevan Gyumri I-159
    Gyumri Vanadzor K-986
    Kapan Vanadzor J-745
    Yerevan
    Gyumri
    Vanadzor

    Output
    I-159
    K-986

    ====== Test #2 =======
    Input
    3
    Yerevan Gyumri I-159
    Gtumri Vanadzor K-986
    Kapan Vanadzpr J-745
    Yerevan
    Kapan
    Vanadzor

    Output
    Unreachable city!
*/

/*
// Option 1
#include <iostream>
#include <string>

class TRAIN
{
public:
    int a;
    std::string mStartCity[40]{};
    std::string mEndCity[40]{};
    std::string mTrainNumber[40]{};
    std::string mCity;
    std::string mCity_2;
    std::string mCity_3;

    void print()
    {
        bool val = false;
        for (int j = 0; j < a; j++)
        {
            if (mCity == mStartCity[j] && mCity_2 == mEndCity[j] && mCity_2 == mStartCity[j + 1] && mCity_3 == mEndCity[j + 1])
            {
                std::cout << mTrainNumber[j] << "\n" << mTrainNumber[j + 1] << "\n";
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
    std::string name, number, city, city_2, city_3;
    std::cin >> n;
    const int p = 3 * n;
    std::string lineVariable[p]{};
    train.a = 3 * n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> lineVariable[i];
        train.mStartCity[i] += lineVariable[i];

        std::cin >> lineVariable[i];
        train.mEndCity[i] += lineVariable[i];

        std::cin >> lineVariable[i];
        train.mTrainNumber[i] += lineVariable[i];
    }
    std::cin >> city;
    train.mCity = city;
    std::cin >> city_2;
    train.mCity_2 = city_2;
    std::cin >> city_3;
    train.mCity_3 = city_3;
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
    std::string city_name1;
    std::string city_name2;
    std::string train_number;
};

int main()
{
    int n;
    std::cin >> n;

    std::vector<Train> schedule(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> schedule[i].city_name1;
        std::cin >> schedule[i].city_name2;
        std::cin >> schedule[i].train_number;
    }

    std::string my_city1, my_city2, my_city3;
    std::cin >> my_city1 >> my_city2 >> my_city3;

    bool cityIsReachable = false;
    std::string number1, number2;

    for (int i = 0; i < n; ++i)
    {
        if ((my_city1 == schedule[i].city_name1) && (my_city2 == schedule[i].city_name2))
        {
            number1 = schedule[i].train_number;
            for (int i = 0; i < n; ++i)
            {
                if ((my_city2 == schedule[i].city_name1) && (my_city3 == schedule[i].city_name2))
                {
                    number2 = schedule[i].train_number;
                    cityIsReachable = true;
                }
            }
        }
    }

    if (cityIsReachable)
    {
        std::cout << number1 << std::endl
                  << number2;
        ;
    }
    if (!cityIsReachable)
    {
        std::cout << "Unreachable city!";
    }
}