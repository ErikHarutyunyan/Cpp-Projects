// Задача 19 Самая высокая популярность.cpp

/*
	Необходимо написать программу, в которой реализованы следующие классы: Book, FictionBook, ScientificBook

    Объекты Book- это книги
    .Класс FictionBook наследуется от класса Book, а объекты в этом классе являются художественными книгами.
    .Класс "ScientificBook" наследуется от класса "Книга", а объектами в этом классе являются научные книги.
    Поля классов.

    В классе .Book должно быть поле заголовка
    Класс FictionBook должен включать в себя количество проданных экземпляров и количество копий.
    В классе "ScientificBook" должна быть указана цена книги, количество страниц տր, количество экземпляров, переданных в библиотеки.
    Классовые методы.

	Дизайнерам необходимо было создать .Book, FictionBook, ScientificBook объекты функции, называемой .popularity, которая вычисляет популярность художественной книги (в виде числа с плавающей точкой) по следующей формуле: (s / c) * (s / 1000), где s - количество экземпляров книги, а c - количество экземпляров книги. Функция, называемая дорогой, которая вычисляет степень ценности научной книги (в виде числа с плавающей точкой) по следующей формуле: цена / количество страниц. Программа должна получить данные N художественных книг в следующем порядке: название,
	Тираж, количество проданных копий. Затем данные научных книг М в порядке названий. Цена, количество страниц, количество книг, отданных в библиотеки. В результате проекта должны быть опубликованы названия тех художественных книг, которые имеют наибольшую популярность. Как и название научной книги, которая была передана библиотекам больше всего и имеет более низкую, чем средняя цена, если нет, то отображение "Not found!".
*/

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    2
    Qaos
    5000 4800
    Samvel
    10000 8600
    4
    Cosmos
    4000 1000 100
    Sapiens: A Brief History of Humankind
    10000 380 50
    A Brief History of Time
    7500 460 200
    The Origin of Species
    4000 400 500

    Результат работы
    Samvel
    The Origin of Species

    ====== Тест #2 =======
    Входные данные
    2
    Qaos
    5000 4800
    Samvel
    10000 8600
    4
    Cosmos
    4000 1000 100
    Sapiens: A Brief History of Humankind
    10000 380 50
    A Brief History of Time
    7500 460 200
    The Origin of Species
    4000 400 180

    Результат работы
    Samvel
    Not found!

    ====== Тест #3 =======
    Входные данные
    2
    Qaos
    10000 8600
    Samvel
    10000 8600
    4
    Cosmos
    4000 400 500
    Sapiens: A Brief History of Humankind
    4000 400 500
    A Brief History of Time
    7500 460 200
    The Origin of Species
    10000 380 50

    Результат работы
    Qaos
    Samvel
    Cosmos
    Sapiens: A Brief History of Humankind
*/

#include <iostream>
#include <vector>
#include <string>

class Book
{
protected:
	std::string mName;

public:
	Book(const std::string &name)
		 : mName(name)
	{
	}
	~Book()
	{
	}
	std::string getName()
	{
		return mName;
	}
};

class FictionBook : public Book
{
protected:
	int mSold;
	int mPrinting;

public:
	FictionBook(const std::string &name, int sold, int printing)
		 : Book(name), mSold(sold), mPrinting(printing)
	{
	}
	~FictionBook()
	{
	}
	double popularity()
	{
		return (mSold / mPrinting) * (mSold / 1000);
	}
};

class ScientificBook : public Book
{
protected:
	int mCost;
	int mPage;
	int mLibraries;

public:
	ScientificBook(const std::string &name, int cost, int page, int libaries)
		 : Book(name), mCost(cost), mPage(page), mLibraries(libaries)
	{
	}
	double expencive()
	{
		return mCost / mPage;
	}
	int getLib()
	{
		return mLibraries;
	}
};

int main()
{
	std::vector<FictionBook> fiction_book;
	std::vector<ScientificBook> sciense_book;
	std::string name_book;
	int n, m;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::string name_book;
		int sold, printing;
		std::getline(std::cin, name_book);
		std::getline(std::cin, name_book);
		std::cin >> sold >> printing;
		fiction_book.push_back(FictionBook(name_book, sold, printing));
		// std::cin.ignore();
		// std::getline (std::cin,name_book);
		// std::cin  >> sold >> printing;
		// fiction_book.push_back(FictionBook(name_book , sold , printing));
	}
	std::cin >> m;
	for (int i = 0; i < m; ++i)
	{
		std::string name_book;
		int cost, page, libraries;
		std::getline(std::cin, name_book);
		std::getline(std::cin, name_book);
		std::cin >> cost >> page >> libraries;
		sciense_book.push_back(ScientificBook(name_book, cost, page, libraries));
		// std::cin.ignore();
		// std::getline(std::cin , name_book);
		// std::cin >> cost >> page >> libraries;
		// sciense_book.push_back(ScientificBook(name_book, cost , page, libraries));
	}
	double middle_expence = 0;
	double sum = 0;
	for (int i = 0; i < m; ++i)
	{
		sum += sciense_book[i].expencive();
		middle_expence = sum / m;
	}
	int max_lib = sciense_book[0].getLib();
	for (int i = 0; i < m; ++i)
	{
		if (sciense_book[i].getLib() > max_lib)
			max_lib = sciense_book[i].getLib();
	}

	int max_popularity = fiction_book[0].popularity();
	for (int i = 0; i < n; ++i)
	{
		if (fiction_book[i].popularity() > max_popularity)
			max_popularity = fiction_book[i].popularity();
	}
	for (int i = 0; i < n; ++i)
	{
		if (fiction_book[i].popularity() == max_popularity)
			std::cout << fiction_book[i].getName() << "\n";
	}

	bool check = true;

	for (int i = 0; i < m; ++i)
	{
		if (sciense_book[i].getLib() == max_lib && sciense_book[i].expencive() < middle_expence)
		{
			std::cout << sciense_book[i].getName() << "\n";
			check = false;
		}
	}
	if (check)
		std::cout << "Not found!";
}