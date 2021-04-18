// Task 10 From end to end.cpp

/* The input is given a matrix size of 10x10, consisting of zeros and one, you need to display YES, if you can get from the upper-left corner to the lower-right corner, moving up 1 cell at each step, from the bottom, left or right and not passing one, and NO otherwise. It is known that the upper-left and lower-right corners of the cell are always 0. You can use the channel algorithm to solve the problem. */

/*
    Examples
    ====== Test #1 =======
    Input
    0 1 0 0 0 0 0 0 0 0
    0 1 0 0 1 0 1 0 0 0
    0 1 1 1 1 0 1 1 1 0
    0 0 0 0 0 0 0 0 0 0
    0 1 1 1 1 0 1 1 1 0
    0 1 0 0 0 0 0 0 0 0
    0 1 1 1 1 1 0 1 1 1
    0 1 1 1 0 0 0 1 0 0
    0 0 0 1 0 0 0 1 1 0
    1 1 1 1 0 0 0 0 0 0

    Output
    YES

    ====== Test #2 =======
    Input
    0 1 0 0 0 0 0 0 0 0
    0 1 0 0 1 0 1 0 0 0
    0 1 1 1 1 0 1 1 1 0
    0 0 0 0 0 0 0 0 0 0
    0 1 1 1 1 0 1 1 1 1
    0 1 0 0 0 1 0 0 0 0
    0 1 1 1 1 1 0 1 1 1
    0 1 1 1 0 0 0 1 0 0
    0 0 0 1 0 0 0 1 1 0
    1 1 1 1 0 0 0 0 0 0

    Output
    NO

    ====== Test #3 =======
    Input
    0 1 0 0 0 0 0 0 0 0
    1 1 0 0 1 0 1 0 0 0
    0 1 1 1 1 0 1 1 1 0
    0 0 0 0 0 0 0 0 0 0
    0 1 1 1 1 0 1 1 1 1
    0 1 0 0 0 1 0 0 0 0
    0 1 1 1 1 1 0 1 1 1
    0 1 1 1 0 0 0 1 0 0
    0 0 0 1 0 0 0 1 1 0
    1 1 1 1 0 0 0 0 0 0

    Output
    NO

    ====== Test #4 =======
    Input
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 1 1
    0 0 0 0 0 0 0 0 1 0

    Output
    NO

    ====== Test #5 =======
    Input
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0

    Output
    YES

    ====== Test #6 =======
    Input
    0 1 0 0 0 1 0 0 0 1
    0 1 0 1 0 1 0 1 0 1
    0 1 0 1 0 1 0 1 0 1
    0 1 0 1 0 1 0 1 0 1
    0 1 0 1 0 1 0 1 0 1
    0 1 0 1 0 1 0 1 0 1
    0 1 0 1 0 1 0 1 0 1
    0 1 0 1 0 1 0 1 0 1
    0 1 0 1 0 1 0 1 0 1
    0 0 0 1 0 0 0 1 0 0

    Output
    YES
*/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Index
{
public:
    int i = 0;
    int j = 0;
};

int main()
{
    int col = 10;
    int row = 10;
    Index index;
    int count = 1;
    queue<int> q;
    q.push(index.i);
    q.push(index.j);

    vector<vector<int>> road(col, vector<int>(row));
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> road[i][j];
        }
    }

    vector<vector<int>> steps(col, vector<int>(row));
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if ((i == 0) && (j == 0))
            {
                steps[i][j] = 0;
            }
            else
            {
                steps[i][j] = -1;
            }
        }
    }

    while (!q.empty())
    {
        index.i = q.front();
        q.pop();
        index.j = q.front();
        q.pop();
        if (index.i - 1 != -1 && road[index.i - 1][index.j] == 0 && steps[index.i - 1][index.j] == -1)
        {
            q.push(index.i - 1);
            q.push(index.j);
            steps[index.i - 1][index.j] = steps[index.i][index.j] + 1;
        }
        if (index.i + 1 != 10 && road[index.i + 1][index.j] == 0 && steps[index.i + 1][index.j] == -1)
        {
            q.push(index.i + 1);
            q.push(index.j);
            steps[index.i + 1][index.j] = steps[index.i][index.j] + 1;
        }
        if (index.j + 1 != 10 && road[index.i][index.j + 1] == 0 && steps[index.i][index.j + 1] == -1)
        {
            q.push(index.i);
            q.push(index.j + 1);
            steps[index.i][index.j + 1] = steps[index.i][index.j] + 1;
        }
        if (index.j - 1 != -1 && road[index.i][index.j - 1] == 0 && steps[index.i][index.j - 1] == -1)
        {
            q.push(index.i);
            q.push(index.j - 1);
            steps[index.i][index.j - 1] = steps[index.i][index.j] + 1;
        }
        if (index.i == 9 && index.j == 9)
        {
            break;
        }
    }
    if (index.i == 9 && index.j == 9)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
