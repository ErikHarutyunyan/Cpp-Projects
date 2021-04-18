// Խնդիր 18 Առավելագույն աշխատավարձ ստացող նվազագույն տարիքով.cpp

/*
    Պահանջվում է գրել ծրագիր, որում իրականցված են Person և Employee դասերը։ Person դասի օբյեկտները
    մարդիկ են, իսկ Employee դասը ժառանգված է Person դասից, և այդ դասի օբյեկտները աշխատողներ են:

    Դասերի դաշտեր.

    .Person դասում առնվազն պետք է լինեն անուն, ազգանուն և ծննդյան տարեթիվ դաշտերը
    .Employee դասում առնվազն պետք է լինի աշխատավարձ դաշտերը

    Ծրագիրը մուտքում պետք է ստանա N աշխատողների տվյալները հերթականությամբ՝ անուն, ազգանուն, 
    ծննդյան տարեթիվ և աշխատավարձ։ Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի առավելագույն
    աշխատավարձ ստացող նվազագույն տարիքով աշխատողների ազգանունները, այդպիսիք չլինելու դեպքում արտածի
    "Not found!":
*/

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    4
    Karen Gevorgyan
    1990 150000
    Arusyak Vardanyan
    1970 200000
    Karen Exiazaryan
    2000 300000
    Manvel Arustamyan
    2000 300000

    Ելք
    Exiazaryan
    Arustamyan

    ====== Թեստ #2 =======
    Մուտք
    4
    Karen Gevorgyan
    1990 150000
    Arusyak Vardanyan
    2000 200000
    Karen Exiazaryan
    1985 300000
    Manvel Arustamyan
    1993 100000

    Ելք
    Not found!

    ====== Թեստ #3 =======
    Մուտք
    4
    Karen Gevorgyan
    2000 300000
    Arusyak Vardanyan
    2000 300000
    Karen Exiazaryan
    2000 300000
    Manvel Arustamyan
    2000 300000

    Ելք
    Gevorgyan
    Vardanyan
    Exiazaryan
    Arustamyan
*/

/*
// Տարբերակ 1
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

// Տարբերակ 2
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
