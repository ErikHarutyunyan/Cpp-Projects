// Task 9 Balanced brackets.cpp

/* The input contains a sequence of characters (‘(‘, ‘)’, ‘{’, ‘}’, ‘[‘ and ‘]’, required to display YES if it is the correct expression in parentheses and  NO, otherwise. */

/*
    Examples
    ====== Test #1 =======
    Input
    (){[]}[{{}}]

    Output
    YES

    ====== Test #2 =======
    Input
    ((())

    Output
    NO

    ====== Test #3 =======
    Input
    [{]}

    Output
    NO

    ====== Test #4 =======
    Input
    (

    Output
    NO

    ====== Test #5 =======
    Input
    ]

    Output--
    NO

    ====== Test #6 =======
    Input
    ({[]})

    Output
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