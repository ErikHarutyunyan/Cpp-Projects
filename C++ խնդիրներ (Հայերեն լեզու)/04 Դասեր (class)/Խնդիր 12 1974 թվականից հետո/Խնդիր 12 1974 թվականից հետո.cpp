// Խնդիր 12 1974 թվականից հետո.cpp

/* 
    Հայտնի է, արտադրամասում կան առանձին բանվորական խմբեր, որոնք ունեն անվանումներ։ 
    Պահանջվում է գրել ծրագիր, որը մուտքում կստանա խմբերի քանակը, ապա ըստ հերթականության յուրաքանչյուր խմբի անվանումը, խմբում բանվորների քանակը և յուրաքանչյուր բանվորի անունն ու ծննդյան թիվը։ Ծրագիրը պետք է արտածի բոլոր այն խմբերի անվանումները, որոնց բոլոր բանվորները ծնվել են 1974 թվականից հետո։ Այդպիսիք չլինելու դեպքում արտածել “Not found!” հաղորդագրությունը։
    Ծրագիրը լուծելիս օգտագործել Group և Worker դասերը։
*/

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    3
    A-01
    3
    Karapetyan Garnik 1950
    Davdyan Gor 1990
    Avagyan Simon 1983
    B-58
    2
    Vaxarshyan Vaxarsh 1995
    Araqelyan Karen 1980
    K-03
    2
    Hakobyan Hakob 1992
    Martirosyan Martiros 1999

    Ելք
    B-58
    K-03

    ====== Թեստ #2 =======
    Մուտք
    1
    Z-99
    2
    Karapetyan Alex 1970
    Mkrtchyan Alen 1969

    Ելք
    Not found!

    ====== Թեստ #3 =======
    Մուտք
    3
    A-01
    1
    Avagyan Simon 1983
    B-58
    1
    Vaxarshyan Vaxarsh 1995
    K-03
    1
    Hakobyan Hakob 1992

    Ելք
    A-01
    B-58
    K-03
*/

#include <iostream>
#include <string>
#include <vector>

class Group
{
public:
    Group(const std::string &g);
    ~Group();

protected:
    std::string mGroup;
};

Group::Group(const std::string &g)
    : mGroup(g)
{
}

Group::~Group()
{
}

class Worker : public Group
{
public:
    Worker(const std::string &ln, const std::string &n, int a, const std::string &g);
    ~Worker();

protected:
    std::string mLast_name;
    std::string mName;
    int mAge;
};

Worker::Worker(const std::string &ln, const std::string &n, int a, const std::string &g)
    : mLast_name(ln), mName(n), mAge(a), Group(g)
{
}

Worker::~Worker()
{
}

int main()
{
    int age, n_group, n_worker;
    std::string groups;
    std::string name;
    std::string surname;
    std::vector<Group> group;
    std::vector<Worker> worker;
    bool check = true;
    std::cin >> n_group;
    for (int i = 0; i < n_group; ++i)
    {
        std::cin >> groups;
        group.push_back(groups);
        std::cin >> n_worker;
        int count = 0;
        for (int j = 0; j < n_worker; j++)
        {
            std::cin >> name >> surname >> age;
            worker.push_back(Worker{name, surname, age, groups});
            if (age > 1974)
                ++count;
        }
        if (count == n_worker)
        {
            //std::cout << "\n";
            std::cout << groups << "\n";
            check = false;
        }
    }
    if (check)
        std::cout << "Not found!";
}