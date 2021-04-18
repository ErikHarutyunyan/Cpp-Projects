// Task 20 Mathematician poet.cpp

/*
    It is required to write a program in which the following lessons are implemented: Book, FictionBook, ScientificBook

    .Book objects are books
    .FictionBook class is inherited from the Book class and the objects in that class are fiction books
    .ScientificBook class is inherited from Book class and objects in that class are science books
    Lesson fields.

    The author name and surname fields should be in the .Book class
    There should be a genre field in the fictionBook class with one of the values: novel, story, poem
    .ScientificBook class should have the field: informatics, physics, mathematics
    and "chemistry" in one of the values
    The program must receive the data of the N fiction books at the entrance, in order of the author's name,
    surname and genre. Then the data of M scientific books in order, author's name and field.

    As a result of the project work, it should list the names of the mathematicians who have published
    poems, if there are no such "Nout found!"
*/

/*
    Examples
    ====== Test #1 =======
    Input
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

    Output
    Edgar Vardanyan

    ====== Test #2 =======
    Input
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

    Output
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