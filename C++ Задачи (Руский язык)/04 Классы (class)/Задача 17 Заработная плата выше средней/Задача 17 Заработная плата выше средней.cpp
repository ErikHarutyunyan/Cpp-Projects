// Задача 17 Заработная плата выше средней.cpp

/*
   Вам необходимо написать программу, которая предоставляет классы для Человека и Сотрудника. Объектами класса Person являются люди, а класс Employee наследуется от класса Person, а объектами этого класса являются рабочие:

	Поля классов:

	.Класс "Person " должен иметь, по крайней мере, поля с именами и фамилиями.
   .В классе "Employee ", по крайней мере, должны быть должности и области заработной платы.
   Программа должна получать данные от N-сотрудников в порядке приоритетности - имя и фамилия, должность и заработная плата. В результате работы проекта она должна быть размещена по всем сотрудникам с фамилиями и должностями, чья зарплата не ниже средней.
*/

/*
	Примеры
	====== Тест #1 =======
	Входные данные
	4
	Karen Gevorgyan
	Manager 150000
	Arusyak Vardanyan
	Accountant 200000
	Karen Exiazaryan
	CEO 300000
	Manvel Arustamyan
	Lumberjack 100000

	Результат работы
	Vardanyan Accountant
	Exiazaryan CEO

	====== Тест #2 =======
	Входные данные
	1
	Jon Smith
	CTO 500000

	Результат работы
	Smith CTO

	====== Тест #3 =======
	Входные данные
	4
	Karen Gevorgyan
	Manager 150000
	Arusyak Vardanyan
	Accountant 150000
	Karen Exiazaryan
	CEO 150000
	Manvel Arustamyan
	Lumberjack 150000

	Результат работы
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