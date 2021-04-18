// Task 13 Working on the A-15.cpp

/*
	It is known that there are separate workers' groups in the factory, which have factory numbers,
	in which they work. It is required to write a program that will receive the number of groups in the entry, then by
	the name of the workshop of each group in the sequence, the number of workers in the group and each
	Worker's name and date of birth. The program must display the names of all workers who:
	They work in factory A-15. If not, display "Not found!" the message.
	Use Group and Worker lessons when solving the program.
*/

/*
	Examples
	====== Test #1 =======
	Input
	3
	A-15
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

	Output
	Karapetyan Garnik 
	Davdyan Gor 
	Avagyan Simon 
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
	void printInfo();
	std::string check_a15();

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
std::string Worker::check_a15()
{
	return mGroup;
}

void Worker::printInfo()
{
	std::cout << mLast_name << " " << mName;
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
		}
	}
	for (int i = 0; i < worker.size(); ++i)
	{
		if ("A-15" == worker[i].check_a15())
		{
			worker[i].printInfo();
			std::cout << "\n";
			check = false;
		}
	}

	if (check)
		std::cout << "Not found!";
}