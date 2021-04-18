// Задача 18 Максимальная заработная плата с минимальным возрастом.cpp

/*
    Вам необходимо написать программу, которая предоставляет классы для Человека и Сотрудника. Объекты класса "Person"
    это люди, а класс "Employee" наследуется от класса Person, а объекты этого класса - Employee:

    Поля классов:

    ․Класс Person должен содержать, по крайней мере, имя и фамилию, а также дату рождения поля.
    .Employee в классе должен иметь, по крайней мере, поле зарплаты.

    Программа должна получать данные от N-сотрудников в порядке приоритета - имя и фамилия,
    дата рождения и зарплата. В результате работы проекта, он должен сделать максимум
    имена работников с минимальным возрастом, получающих заработную плату, если их нет
    "Not found!"
*/

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    4
    Karen Gevorgyan
    1990 150000
    Arusyak Vardanyan
    1970 200000
    Karen Exiazaryan
    2000 300000
    Manvel Arustamyan
    2000 300000

    Результат работы
    Exiazaryan
    Arustamyan

    ====== Тест #2 =======
    Входные данные
    4
    Karen Gevorgyan
    1990 150000
    Arusyak Vardanyan
    2000 200000
    Karen Exiazaryan
    1985 300000
    Manvel Arustamyan
    1993 100000

    Результат работы
    Not found!

    ====== Тест #3 =======
    Входные данные
    4
    Karen Gevorgyan
    2000 300000
    Arusyak Vardanyan
    2000 300000
    Karen Exiazaryan
    2000 300000
    Manvel Arustamyan
    2000 300000

    Результат работы
    Gevorgyan
    Vardanyan
    Exiazaryan
    Arustamyan
*/

/*
// Вариант 1
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    string surName;
    int berdData;
};
class Employee : public Person
{
public:
    int salary;
};

int main()
{
    int n{};
    cin >> n;
    Employee emplyee[n];
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> emplyee[i].name >> emplyee[i].surName >> emplyee[i].berdData >> emplyee[i].salary;
    }
    for (int i = 0; i < n; i++)
    {
        if (sum < emplyee[i].salary)
            sum = emplyee[i].salary;
    }
    for (int i = 0; i < n; i++)
    {
        if (emplyee[i].salary >= sum && emplyee[i].berdData >= 2000)
        {
            cout << emplyee[i].surName << endl;
            count -= 1;
        }
    }
    if (count == 0)
    {
        cout << "Not found!" << endl;
    }
    return 0;
}
*/

// Вариант 2
#include <iostream>
#include <string>
#include <vector>

class Person
{
public:
    std::string name;
    std::string surname;
    int birthDate;
};

class Employee : public Person
{
public:
    int salary;
};

int main()
{
    int n;
    std::cin >> n;

    std::vector<Employee> input(n);
    std::vector<std::string> result;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> input[i].name >> input[i].surname >>
            input[i].birthDate >> input[i].salary;
    }
    int min_birthDate = 0;
    int max_salery = 0;

    for (int i = 0; i < n; ++i)
    {
        if (input[i].birthDate >= min_birthDate)
        {
            min_birthDate = input[i].birthDate;
        }
        if (input[i].salary > max_salery)
        {
            max_salery = input[i].salary;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if ((input[i].birthDate == min_birthDate) && (input[i].salary == max_salery))
        {
            result.push_back(input[i].surname);
        }
    }
    int size = result.size();
    for (int i = 0; i < size; ++i)
    {
        std::cout << result[i] << '\n';
    }
    if (result.size() == 0)
    {
        std::cout << "Not found!";
    }
}
