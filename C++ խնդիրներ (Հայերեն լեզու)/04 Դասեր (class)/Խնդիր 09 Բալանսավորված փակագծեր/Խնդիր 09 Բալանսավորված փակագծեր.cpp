// Խնդիր 09 Բալանսավորված փակագծեր.cpp

/* Մուտքում տրվում է ‘(‘, ‘)’, ‘{‘, ‘}’, ‘[‘ և ‘]’ սիմվոներից բաղկացած հաջորդականություն, պահանջվում է արտածել YES, եթե այն փակագծերի ճիշտ արտահայտություն է և NO՝ հակառակ դեպքում։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    (){[]}[{{}}]

    Ելք
    YES

    ====== Թեստ #2 =======
    Մուտք
    ((())

    Ելք
    NO

    ====== Թեստ #3 =======
    Մուտք
    [{]}

    Ելք
    NO

    ====== Թեստ #4 =======
    Մուտք
    (

    Ելք
    NO

    ====== Թեստ #5 =======
    Մուտք
    ]

    Ելք
    NO

    ====== Թեստ #6 =======
    Մուտք
    ({[]})

    Ելք
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