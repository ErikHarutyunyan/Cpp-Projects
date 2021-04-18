// Խնդիր 17 Միջինից բարձր աշխատավարձ.cpp

/*
   Պահանջվում է գրել ծրագիր որում իրականցված են Person և Employee դասերը։ Person դասի օբյեկտները մարդիկ են, իսկ Employee դասը ժառանգված է Person դասից, և այդ դասի օբյեկտները աշխատողներ են:

   Դասերի դաշտեր.

   .Person դասում առնվազն պետք է լինեն անուն, ազգանուն դաշտերը
   .Employee դասում առնվազն պետք է լինեն պաշտոն և աշխատավարձ դաշտերը

	Ծրագիրը մուտքում պետք է ստանա N աշխատողների տվյալները հերթականությամբ՝ անուն, ազգանուն,
	պաշտոն և աշխատավարձ։ Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի բոլոր աշխատողների 
	ազգանունները և պաշտոնները, որոնց աշխատավարձը միջին աշխատավարձից ցածր չէ։
*/

/*
	Օրինակներ
	====== Թեստ #1 =======
	Մուտք
	4
	Karen Gevorgyan
	Manager 150000
	Arusyak Vardanyan
	Accountant 200000
	Karen Exiazaryan
	CEO 300000
	Manvel Arustamyan
	Lumberjack 100000

	Ելք
	Vardanyan Accountant
	Exiazaryan CEO

	====== Թեստ #2 =======
	Մուտք
	1
	Jon Smith
	CTO 500000

	Ելք
	Smith CTO

	====== Թեստ #3 =======
	Մուտք
	4
	Karen Gevorgyan
	Manager 150000
	Arusyak Vardanyan
	Accountant 150000
	Karen Exiazaryan
	CEO 150000
	Manvel Arustamyan
	Lumberjack 150000

	Ելք
	Gevorgyan Manager
	Vardanyan Accountant
	Exiazaryan CEO
	Arustamyan Lumberjack
*/

#include <iostream>
#include <string>
#include <vector>

class Person
{
public:
	Person(const std::string &name, const std::string &last_name);
	~Person();

protected:
	std::string mName;
	std::string mLast_name;
};
Person::Person(const std::string &name, const std::string &last_name)
	 : mName(name), mLast_name(last_name)
{
}
Person::~Person()
{
}
class Employee : public Person
{
public:
	Employee(const std::string &name, const std::string &last_name, const std::string &position, int salary);
	~Employee();
	void GetNameLastName();
	int GetSalary();

protected:
	std::string mPosition;
	int mSalary;
};

Employee::Employee(const std::string &name, const std::string &last_name, const std::string &position, int salary)
	 : Person(name, last_name), mPosition(position), mSalary(salary)
{
}

Employee::~Employee()
{
}

int Employee::GetSalary()
{
	return mSalary;
}

void Employee::GetNameLastName()
{
	std::cout << mLast_name << " " << mPosition << "\n";
}

int main()
{
	int n, salary, Average_salary, sum;
	std::string name, last_name, position;
	std::vector<Person> person;
	std::vector<Employee> employee;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> name >> last_name;
		std::cin >> position >> salary;
		employee.push_back(Employee{name, last_name, position, salary});
		sum += salary;
	}
	for (int j = 0; j < n; ++j)
	{
		if (employee[j].GetSalary() >= sum / n)
			employee[j].GetNameLastName();
	}
}