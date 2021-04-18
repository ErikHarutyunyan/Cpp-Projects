// Задача 9 Сбалансированные скобки.cpp

/* Входные данные содержат последовательность символов ('(', ')', '{', '}', '[' и ']', необходимых для отображения YES, если это правильное выражение в круглых скобках и NO, в противном случае. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    (){[]}[{{}}]

    Результат работы
    YES

    ====== Тест #2 =======
    Входные данные
    ((())

    Результат работы
    NO

    ====== Тест #3 =======
    Входные данные
    [{]}

    Результат работы
    NO

    ====== Тест #4 =======
    Входные данные
    (

    Результат работы
    NO

    ====== Тест #5 =======
    Входные данные
    ]

    Результат работы
    NO

    ====== Тест #6 =======
    Входные данные
    ({[]})

    Результат работы
    YES
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Bracket
{
private:
    stack<char> st;

public:
    char c;
    bool check(const std::string &bracket)
    {
        if (bracket.size() <= 0)
            return true;
        for (int i = 0; i <= bracket.size() - 1; ++i)
        {
            c = bracket[i];
            if (c == '[')
                st.push(']');
            else if (c == '{')
                st.push('}');
            else if (c == '(')
                st.push(')');
            else if (!st.empty())
            {
                if (c == st.top())
                {
                    st.pop();
                }
            }
            else
                return false;
        }
        return st.empty();
    }
};
int main()
{
    Bracket bracket;
    string s;
    getline(cin, s);
    if (bracket.check(s))
        cout << "YES";
    else
        cout << "NO";
}