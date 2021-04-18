// Задача 20 Поэт-математик.cpp

/*
    Необходимо написать программу, в которой реализованы следующие классы: Book, FictionBook, ScientificBook

    Объекты Book - это книги
    .Класс FictionBook наследуется от класса "Book", а объекты в этом классе являются художественными книгами.
    .Класс "ScientificBook" наследуется от класса "Book", а объектами в этом классе являются научные книги.

    Поля классов.

    Поля имени и фамилии автора должны находиться в классе "Book"
    В классе FictionBook должно быть жанровое поле с одним из значений: роман, сюжет, стихотворение.
    Класс "ScientificBook" должен иметь область: информатика, физика, математика и химия в одном из значений. 
    Программа должна получать данные N художественных книг при входе, в порядке возрастания имени, фамилии и жанра автора. 
    Затем данные в научных книг в порядке возрастания, имя автора и область. 
    В результате работы над проектом необходимо перечислить имена математиков, опубликовавших стихи, если таких нет "Nout found!".
*/

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
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

    Результат работы
    Edgar Vardanyan

    ====== Тест #2 =======
    Входные данные
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

    Результат работы
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