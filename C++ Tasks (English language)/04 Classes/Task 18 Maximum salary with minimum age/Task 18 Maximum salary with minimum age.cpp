// Task 18 Maximum salary with minimum age.cpp

/*
    You need to write a program that provides lessons for Person and Employee. Objects of the Person class
    these are people, and the Employee class is inherited from the Person class, and objects of this class are workers:

    Classes fields:
    .The Person class must contain at least the first and last names and date of birth of the field
    . The employee in the class should at least have a salary field

    The program must receive data from N-employees in order of priority-first and last name,
    date of birth and salary. As a result of the project's work, it should do the maximum
    names of employees with a minimum age who receive wages, if there are none
    "Not found!":
*/

/*
    Examples
    ====== Test #1 =======
    Input
    4
    Karen Gevorgyan
    1990 150000
    Arusyak Vardanyan
    1970 200000
    Karen Exiazaryan
    2000 300000
    Manvel Arustamyan
    2000 300000

    Output
    Exiazaryan
    Arustamyan

    ====== Test #2 =======
    Input
    4
    Karen Gevorgyan
    1990 150000
    Arusyak Vardanyan
    2000 200000
    Karen Exiazaryan
    1985 300000
    Manvel Arustamyan
    1993 100000

    Output
    Not found!

    ====== Test #3 =======
    Input
    4
    Karen Gevorgyan
    2000 300000
    Arusyak Vardanyan
    2000 300000
    Karen Exiazaryan
    2000 300000
    Manvel Arustamyan
    2000 300000

    Output
    Gevorgyan
    Vardanyan
    Exiazaryan
    Arustamyan
*/

/*
// Option 1
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

// Option 2
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
