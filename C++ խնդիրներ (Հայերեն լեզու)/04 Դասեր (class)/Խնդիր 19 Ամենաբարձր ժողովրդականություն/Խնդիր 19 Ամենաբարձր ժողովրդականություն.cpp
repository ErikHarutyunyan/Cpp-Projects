// Խնդիր 19 Ամենաբարձր ժողովրդականություն.cpp

/*
	Պահանջվում է գրել ծրագիր, որում իրականցված են հետևյալ դասերը՝ Book, FictionBook, ScientificBook

	.Book դասի օբյեկտները գրքեր են
	.FictionBook դասը ժառանված է Book դասից և այդ դասի օբյեկտները գեղարվեստական գրքեր են
	.ScientificBook դասը ժառանված է Book դասից և այդ դասի օբյեկտները գիտական գրքեր են
	Դասերի դաշտեր.

	.Book դասում պետք է լինի վերնագիր դաշտը
	FictionBook դասում պետք է լինեն վաճառված օրինակների քանակ և տպաքանակ դաշտերը
	ScientificBook դասում պետք է լինեն գրքի գին, էջերի քանակ և գրադարաններին տրված օրինակների քանակ դաշտերը
	Դասերի մեթոդներ.

	.Book, FictionBook, ScientificBook դասի օբյեկտներ ստեղծելու համար անհրաժեշտ կոնստրուկտորներ
	.popularity անունով ֆունկցիա, որը հաշվում է գեղարվեստական գրքի ժողովրդականությունը 
	(որպես սահող ստորակետով թիվ) հետևյալ բանաձևով՝ (s / c) * (s / 1000), որտեղ s-ը գրքի վաճառված 
	օրինակների քանակն է, իսկ c-ն գրքի տպաքանակն է
	.expensive անունով ֆունկցիա, որը հաշվում է գիտական գրքի թանկարժեքության աստիճանը
	(որպես սահող ստորակետով թիվ) հետևյալ բանաձևով՝ գին/էջերի քանակ
	Ծրագիրը մուտքում պետք է ստանա N գեղարվեստական գրքերի տվյալները հերթականությամբ՝ վերնագիր, 
	տպաքանակ, վաճառված օրինակների քանակ։ Ապա M գիտական գրքերի տվյալներ հերթականությամբ՝ վերնագիր, 
	գին, էջերի քանակ, գրադարաններին տրված գրքերի քանակ։

	Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի այն գեղարվեստական գրքերի վերնագրերը որոնք ունեն 
	ամենաբարձր ժողովրդականությունը։ Ինչպես նաև այն գիտական գրքի վերնագիը, որը ամենաշատն է տրվել գրադարաններին
	և ունի միջինից ցածր թանկարժեքություն, այդպիսին չլինելու դեպքում արտածել "Not found!"։
*/

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
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

    Ելք
    Samvel
    The Origin of Species

    ====== Թեստ #2 =======
    Մուտք
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

    Ելք
    Samvel
    Not found!

    ====== Թեստ #3 =======
    Մուտք
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

    Ելք
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