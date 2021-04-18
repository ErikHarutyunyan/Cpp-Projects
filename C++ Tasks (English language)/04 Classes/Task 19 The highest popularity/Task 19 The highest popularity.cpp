//Task 19 The highest popularity.cpp

/*
	It is required to write a program in which the following lessons are implemented: Book, FictionBook, ScientificBook

	.Book objects are books
	.FictionBook class is inherited from the Book class and the objects in that class are fiction books
	.ScientificBook class is inherited from Book class and  objects in that class are science books
	Lesson fields.

	There should be a title field in the .Book class
	The FictionBook class should include the number of copies sold and the number of copies
	The ScientificBook class should include the price of the book, the number of pages տր the number of copies given to libraries
	Lesson methods.

	Designers needed to create .Book, FictionBook, ScientificBook objects
	.a function called .popularity, which calculates the popularity of a fiction book
	(as a floating point number) with the following formula: (s / c) * (s / 1000), where s is the book sold.
	is the number of copies, and c is the number of copies of the book
	A function called .expensive, which calculates the degree of value of a science book
	(as a floating point number) with the following formula: price / number of pages
	The program must receive the data of N fiction books in the following order: title,
	Circulation, number of copies sold. Then the data of M scientific books in order: title,
	Price, number of pages, number of books given to libraries.

	As a result of the project, it should publish the titles of the fiction books they have
	the highest popularity. Like the title of the science book that has been given to libraries the most
	and  has a lower than average price, if not, display "Not found!".
*/

/*
	Examples
	====== Test #1 =======
	Input
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

	Output
	Samvel
	The Origin of Species

	====== Test #2 =======
	Input
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

	Output
	Samvel
	Not found!

	====== Test #3 =======
	Input
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

	Output
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