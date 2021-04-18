// Task 17 Above average salary.cpp

/*
	You need to write a program that provides classes for Person and Employee. Objects of the Person class are people, and the Employee class is inherited from the Person class, and objects of this class are workers:

	Classes fields:

	.The Person class must at least have first names and last name fields
	. In the Employee class, at least, there should be positions and salary fields

	The program must receive data from N-employees in order of priority-first and last name,
	position and salary. As a result of the project's work, it should be posted for all employees
	names and positions whose salary is not lower than the average salary.
*/

/*
	Examples
	====== Test #1 =======
	Input
	4
	Karen Gevorgyan
	Manager 150000
	Arusyak Vardanyan
	Accountant 200000
	Karen Exiazaryan
	CEO 300000
	Manvel Arustamyan
	Lumberjack 100000

	Output
	Vardanyan Accountant
	Exiazaryan CEO

	====== Test #2 =======
	Input
	1
	Jon Smith
	CTO 500000

	Output
	Smith CTO

	====== Test #3 =======
	Input
	4
	Karen Gevorgyan
	Manager 150000
	Arusyak Vardanyan
	Accountant 150000
	Karen Exiazaryan
	CEO 150000
	Manvel Arustamyan
	Lumberjack 150000

	Output
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