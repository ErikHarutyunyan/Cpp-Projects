// Task 14 Best grade

/*
	Write a program that will receive the number of selected school classes at the entrance, and then each class will be added to the list.
	class name, number of students in the class, name of each and 5
	assessment of exams in subjects. The program must produce with the highest academic performance
	class name use the Class and Student lessons to solve the problem. Academic performance in the classroom
	this is the ratio to the sum of students ' grades and the number of students.
*/

/*
	Examples
	====== Test #1 =======
	Input
	3
	8-B
	3
	Araqelya Araqel 9 9 9 9 9
	Vardayan Hasmik 8 8 8 8 8
	Vardanyan Vardan 7 7 7 7 7
	9-A
	5
	Karapetyan Garnik 7 8 9 7 6
	Davdyan Gor 6 7 8 9 9
	Xazaryan Eva 8 8 9 9 7
	Zaqaryan Azat 9 9 9 9 9
	Karapetyan Arevik 8 7 6 6 7
	8-A
	2
	Karapetyan Karapet 8 8 8 8 8
	Avagyan Simon 8 8 9 9 7

	Output
	8-A

	====== Test #2 =======
	Input
	2
	4-B
	3
	Araqelya Araqel 9 9 9 9 9
	Vardayan Hasmik 8 8 8 8 8
	Vardanyan Vardan 7 7 7 7 7
	3-A
	2
	Karapetyan Karapet 8 8 8 8 8
	Avagyan Simon 8 8 9 9 7

	Output
	3-A

	====== Test #3 =======
	Input
	2
	4-B
	2
	Karapetyan Karapet 8 8 8 8 8
	Avagyan Simon 8 8 9 9 7
	4-A
	3
	Araqelya Araqel 9 9 9 9 9
	Vardayan Hasmik 8 8 8 8 8
	Vardanyan Vardan 7 7 7 7 7

	Output
	4-B
*/

#include <iostream>
#include <string>
#include <vector>

class Class
{
public:
	Class(const std::string &_class);
	~Class();

protected:
	std::string mClass;
};
Class::Class(const std::string &_class)
	 : mClass(_class)
{
}
Class::~Class()
{
}
class Student : public Class
{
public:
	Student(const std::string &last_name, const std::string &name, const std::vector<int> &marks, const std::string &_class);
	Student(const std::string &name, const std::string &last_name, const std::string &_class);
	~Student();
	void input_marks();
	double GetBestClass();
	double class_gpa;

protected:
	std::string mLast_name;
	std::string mName;
	std::vector<int> mMarks;
};
Student::Student(const std::string &name, const std::string &last_name, const std::string &_class)
	 : mName(name), mLast_name(last_name), Class(_class)
{
}
Student::Student(const std::string &last_name, const std::string &name, const std::vector<int> &marks, const std::string &_class)
	 : mLast_name(last_name), mName(name), mMarks(marks), Class(_class)
{
}
Student::~Student()
{
}
void Student::input_marks()
{
	const int marks_count = 5;
	double x;
	class_gpa = 0;
	for (int i = 0; i < marks_count; ++i)
	{
		std::cin >> x;
		mMarks.push_back(x);
		class_gpa += x;
	}
}
double Student::GetBestClass()
{
	return class_gpa;
}
int main()
{
	int n_class, n_student;
	double max = 0;
	double temp_max = max;
	std::string surname, name, class_, best_class;
	std::vector<Class> clas;
	std::vector<Student> student;
	std::cin >> n_class;
	for (int i = 0; i < n_class; ++i)
	{
		std::cin >> class_;
		clas.push_back(class_);
		std::cin >> n_student;
		int count = 0;
		for (int j = 0; j < n_student; j++)
		{
			std::cin >> surname >> name;
			Student s(surname, name, class_);
			s.input_marks();
			student.push_back(s);
			max += s.GetBestClass();
		}
		max /= n_student;
		if (max > temp_max)
		{
			temp_max = max;
			best_class = class_;
			max = 0;
		}
	}
	std::cout << best_class;
}