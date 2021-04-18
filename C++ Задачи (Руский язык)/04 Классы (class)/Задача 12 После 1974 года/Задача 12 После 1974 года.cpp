// Задача 12 После 1974 года.cpp

/* 
    Известно, что на фабрике есть отдельные группы рабочих, которые имеют названия.
    Нужно написать программу, которая при входе в систему получит количество групп, затем в следующем порядке
    название каждой группы, количество сотрудников в группе и имя каждого сотрудника.
    и номер рождения. В программе должны быть показаны имена всех этих групп сотрудников, которые 
    родился после 1974 года.  Если нет, распечатайте сообщение "Not found!"
    Используйте групповые и рабочие классы при принятии решения о программе.
*/

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
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

    Результат работы
    B-58
    K-03

    ====== Тест #2 =======
    Входные данные
    1
    Z-99
    2
    Karapetyan Alex 1970
    Mkrtchyan Alen 1969

    Результат работы
    Not found!

    ====== Тест #3 =======
    Входные данные
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

    Результат работы
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