// Խնդիր 20 Մաթեմատիկոս պոետը.cpp

/*
    Պահանջվում է գրել ծրագիր, որում իրականցված են հետևյալ դասերը՝ Book, FictionBook, ScientificBook

    .Book դասի օբյեկտները գրքեր են
    .FictionBook դասը ժառանված է Book դասից և այդ դասի օբյեկտները գեղարվեստական գրքեր են
    .ScientificBook դասը ժառանված է Book դասից և այդ դասի օբյեկտները գիտական գրքեր են
    Դասերի դաշտեր.

    .Book դասում պետք է լինեն հեղինակի անուն և ազգանուն դաշտերը
    .FictionBook դասում պետք է լինի ժանր դաշտը՝ ՛novel՛, ՛story՛ և ՛poem՛ արժեքներից մեկով
    .ScientificBook դասում պետք է լինի բնագավառ դաշտը՝ ՛informatics՛, ‘physics’, ‘mathematics’ 
    և ‘chemistry’ արժեքներից մեկով
    Ծրագիրը մուտքում պետք է ստանա N գեղարվեստական գրքերի տվյալները հերթականությամբ՝ հեղինակի անուն,
    ազգանուն և ժանր։ Ապա M գիտական գրքերի տվյալներ հերթականությամբ՝ հեղինակի անուն և բնագավառ։

    Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի այն մաթեմատիկոսների անունները որոնք ունեն հրատարակված
    պոեմներ, եթե չկան այդպիսիք արտածի “Not found!”։
*/

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    2
    Adam Araqelyan
    story
    Edgar Vardanyan
    poem
    3
    Anahit Kirakosyan
    chemistry
    Edgar Vardanyan
    mathematics
    Gurgen Gevorgyan
    mathematics

    Ելք
    Edgar Vardanyan

    ====== Թեստ #2 =======
    Մուտք
    2
    Adam Araqelyan
    story
    Edgar Vardanyan
    novel
    3
    Anahit Kirakosyan
    chemistry
    Edgar Vardanyan
    mathematics
    Gurgen Gevorgyan
    mathematics

    Ելք
    Not found!
*/

#include <iostream>
#include <vector>
#include <string>

class Book
{
protected:
    std::string mName;
    std::string mLastName;

public:
    Book(std::string name, std::string last_name)
        : mName(name), mLastName(last_name)
    {
    }
    ~Book()
    {
    }
    std::string getName()
    {
        return mName + " " + mLastName;
    }
};

class FictionBook : public Book
{
private:
    std::string mGenre;

public:
    FictionBook(std::string name, std::string last_name, std::string genre)
        : Book(name, last_name), mGenre(genre)
    {
    }
    ~FictionBook()
    {
    }
    bool isPoem()
    {
        return mGenre == "poem";
    }
};

class ScientificBook : public Book
{
private:
    std::string mField;

public:
    ScientificBook(std::string name, std::string last_name, std::string field)
        : Book(name, last_name), mField(field)
    {
    }
    ~ScientificBook()
    {
    }
    bool isMathematican()
    {
        return mField == "mathematics";
    }
};

int main()
{
    std::vector<FictionBook> fictions_book;
    std::vector<ScientificBook> scientific_book;
    int n;
    int m;

    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::string name;
        std::string last_name;
        std::string genre;
        std::cin >> name >> last_name >> genre;
        fictions_book.push_back(FictionBook{name, last_name, genre});
    }

    std::cin >> m;
    for (int i = 0; i < m; ++i)
    {
        std::string name;
        std::string last_name;
        std::string field;
        std::cin >> name >> last_name >> field;
        scientific_book.push_back(ScientificBook{name, last_name, field});
    }

    bool check = true;
    for (int i = 0; i < scientific_book.size(); ++i)
    {
        if (scientific_book[i].isMathematican())
        {
            for (int j = 0; j < fictions_book.size(); ++j)
            {
                if (fictions_book[j].isPoem() && scientific_book[i].getName() == fictions_book[j].getName())
                {
                    std::cout << scientific_book[i].getName() << "\n";
                    check = false;
                }
            }
        }
    }

    if (check)
        std::cout << "Not found!"
                  << "\n";
}