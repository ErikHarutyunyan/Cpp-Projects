// Խնդիր 10 Ծայրից ծայր(Ալիքային ալգորիթմ).cpp

/* Մուտքում տրվում է 10x10 չափերով մատրից՝ բաղկացած զրոներից և մեկերից, պահանջվում է արտածել YES, եթե հնարավոր է վերևի ձախ անկյունից հասնել ներքևի աջ անկյունը՝ ամեն քայլին շարժվելով 1 վանդակ վերև, ներքև, ձախ կամ աջ և չանցնելով մեկերի վրայով, և NO՝ հակառակ դեպքում։ Հայտնի է որ վերևի ձախ և ներքևի աջ անկյունների վանդակները միշտ 0 են։ Խնդիրը լուծելիս կարելի է կիրառել ալիքի ալգորիթմը։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
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

    Ելք
    YES

    ====== Թեստ #2 =======
    Մուտք
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

    Ելք
    NO

    ====== Թեստ #3 =======
    Մուտք
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

    Ելք
    NO

    ====== Թեստ #4 =======
    Մուտք
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

    Ելք
    NO

    ====== Թեստ #5 =======
    Մուտք
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

    Ելք
    YES

    ====== Թեստ #6 =======
    Մուտք
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

    Ելք
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
