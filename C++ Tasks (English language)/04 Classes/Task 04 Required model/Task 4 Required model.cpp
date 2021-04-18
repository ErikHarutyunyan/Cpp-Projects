// Task 4 Required model.cpp

/* Write a program that will receive information about TVs N in the input the model name of each TV, the country of manufacture and the diagonal length, and then the name of the model M. As a result of the program, it must produce the diagonal dimensions of all the specified m-model TVs and the country of manufacture. If there are none, the output is “Not found!"message. */

// Describe a class called TV that will have the following fields:
// . TV model name
// . country of origin
// . diagonal length

/*
    Examples
    ====== Test #1 =======
    Input
    3
    Sony Germany 60
    Sony Italy 54
    LG Korea 58
    Sony

    Output
    Germany 60
    Italy 54

    ====== Test #2 =======
    Input
    3
    Sony Germany 60
    Sony Italy 54
    LG Korea 58
    Samsung

    Output
    Not found!
*/

/*
// Option 1
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

// Option 2
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