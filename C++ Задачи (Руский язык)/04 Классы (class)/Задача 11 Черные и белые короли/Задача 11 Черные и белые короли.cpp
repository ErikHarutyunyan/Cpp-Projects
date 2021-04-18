// Задача 11 Черные и белые короли.cpp

/* При входе поочередно даются номера белых и черных королей на шахматной доске, за которыми следует натуральное число N и последовательность N, состоящая из номеров шахматных клеток. Выход YES необходим, если белый король может съесть черную, не проходя через одну из указанных n клеток, предполагая, что черный король стационарен и NO, в противном случае. Для решения задачи используйте очередь. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные 
    E4 B1
    4 A2 B2 C2 C1

    Результат работы 
    NO

    ====== Тест #2 =======
    Входные данные 
    E2 H7
    3 A2 C2 C1

    Результат работы 
    YES

    ====== Тест #3 =======
    Входные данные 
    A8 H1
    3 G1 G2 H2

    Результат работы 
    NO

    ====== Тест #4 =======
    Входные данные 
    A8 H1
    3 A7 B7 B8

    Результат работы 
    NO

    ====== Тест #5 =======
    Входные данные 
    A8 H8
    28 A7 A6 A5 A4 A3 A2 A1 C2 C3 C4 C5 C6 C7 C8 E7 E6 E5 E4 E3 E2 E1 G8 G7 G6 G5 G4 G3 G2

    Результат работы 
    YES
*/

// Вариант1
#include <iostream>
#include <queue>
#include <vector>

class Index
{
public:
    int i;
    int j;
};

int main()
{
    int n = 8;
    std::vector<std::vector<int>> road(n, std::vector<int>(n, 0));
    std::vector<std::vector<int>> steps(n, std::vector<int>(n, -1));
    std::queue<Index> q;
    char c;
    int x;
    std::cin >> c >> x;
    Index start{c - 'A', x - 1};
    q.push(start);
    steps[start.i][start.j] = 0;
    std::cin >> c >> x;
    Index end{c - 'A', x - 1};
    int m;
    std::cin >> m;
    for (int i = 0; i < m; ++i)
    {
        std::cin >> c >> x;
        road[c - 'A'][x - 1] = 1;
    }
    while (!q.empty())
    {
        Index current = q.front();
        q.pop();
        int i = current.i;
        int j = current.j;
        if (i + 1 < n && road[i + 1][j] == 0 && steps[i + 1][j] == -1)
        {
            q.push(Index{i + 1, j});
            steps[i + 1][j] = steps[i][j] + 1;
        }
        if (i - 1 >= 0 && road[i - 1][j] == 0 && steps[i - 1][j] == -1)
        {
            q.push(Index{i - 1, j});
            steps[i - 1][j] = steps[i][j] + 1;
        }
        if (j + 1 < n && road[i][j + 1] == 0 && steps[i][j + 1] == -1)
        {
            q.push(Index{i, j + 1});
            steps[i][j + 1] = steps[i][j] + 1;
        }
        if (j - 1 >= 0 && road[i][j - 1] == 0 && steps[i][j - 1] == -1)
        {
            q.push(Index{i, j - 1});
            steps[i][j - 1] = steps[i][j] + 1;
        }
    }
    if (steps[end.i][end.j] != -1)
        std::cout << "YES";
    else
        std::cout << "NO";
}

/*
// Вариант 2
#include <iostream>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

class Index
{
public:
    int i;
    int j;
};

void King_1_position(string &white_king, queue<int> &q, vector<vector<int>> &steps)
{
    if (white_king[0] == 'A')

    {
        q.push(8 - (int)(white_king[1] - '0'));
        q.push(0);
        steps[8 - (int)(white_king[1] - '0')][0] = 0;
    }
    else if (white_king[0] == 'B')
    {
        q.push(8 - (int)(white_king[1] - '0'));
        q.push(1);
        steps[8 - (int)(white_king[1] - '0')][1] = 0;
    }
    else if (white_king[0] == 'C')
    {
        q.push(8 - (int)(white_king[1] - '0'));
        q.push(2);
        steps[8 - (int)(white_king[1] - '0')][2] = 0;
    }
    else if (white_king[0] == 'D')
    {
        q.push(8 - (int)(white_king[1] - '0'));
        q.push(3);
        steps[8 - (int)(white_king[1] - '0')][3] = 0;
    }
    else if (white_king[0] == 'E')
    {
        q.push(8 - (int)(white_king[1] - '0'));
        q.push(4);
        steps[8 - (int)(white_king[1] - '0')][4] = 0;
    }
    else if (white_king[0] == 'F')
    {
        q.push(8 - (int)(white_king[1] - '0'));
        q.push(5);
        steps[8 - (int)(white_king[1] - '0')][5] = 0;
    }
    else if (white_king[0] == 'G')
    {
        q.push(8 - (int)(white_king[1] - '0'));
        q.push(6);
        steps[8 - (int)(white_king[1] - '0')][6] = 0;
    }
    else if (white_king[0] == 'H')
    {
        q.push(8 - (int)(white_king[1] - '0'));
        q.push(7);
        steps[8 - (int)(white_king[1] - '0')][7] = 0;
    }
}

void King_2_position(string &black_king, int &black_king_position_i, int &black_king_position_j)
{

    if (black_king[0] == 'A')
    {

        black_king_position_i = 8 - (int)(black_king[1] - '0');
        black_king_position_j = 0;
    }
    else if (black_king[0] == 'B')
    {
        black_king_position_i = 8 - (int)(black_king[1] - '0');
        black_king_position_j = 1;
    }
    else if (black_king[0] == 'C')
    {
        black_king_position_i = 8 - (int)(black_king[1] - '0');
        black_king_position_j = 2;
    }
    else if (black_king[0] == 'D')
    {
        black_king_position_i = 8 - (int)(black_king[1] - '0');
        black_king_position_j = 3;
    }
    else if (black_king[0] == 'E')
    {
        black_king_position_i = 8 - (int)(black_king[1] - '0');
        black_king_position_j = 4;
    }
    else if (black_king[0] == 'F')
    {
        black_king_position_i = 8 - (int)(black_king[1] - '0');
        black_king_position_j = 5;
    }
    else if (black_king[0] == 'G')
    {
        black_king_position_i = 8 - (int)(black_king[1] - '0');
        black_king_position_j = 6;
    }
    else if (black_king[0] == 'H')
    {
        black_king_position_i = 8 - (int)(black_king[1] - '0');
        black_king_position_j = 7;
    }
}

void prohibited_position_save(string &prohibited_position, vector<vector<int>> &road)
{
    if (prohibited_position[0] == 'A')
    {
        road[8 - (int)(prohibited_position[1] - '0')][0] = 1;
    }
    else if (prohibited_position[0] == 'B')
    {
        road[8 - (int)(prohibited_position[1] - '0')][1] = 1;
    }
    else if (prohibited_position[0] == 'C')
    {
        road[8 - (int)(prohibited_position[1] - '0')][2] = 1;
    }
    else if (prohibited_position[0] == 'D')
    {
        road[8 - (int)(prohibited_position[1] - '0')][3] = 1;
    }
    else if (prohibited_position[0] == 'E')
    {
        road[8 - (int)(prohibited_position[1] - '0')][4] = 1;
    }
    else if (prohibited_position[0] == 'F')
    {
        road[8 - (int)(prohibited_position[1] - '0')][5] = 1;
    }
    else if (prohibited_position[0] == 'G')
    {
        road[8 - (int)(prohibited_position[1] - '0')][6] = 1;
    }
    else if (prohibited_position[0] == 'H')
    {
        road[8 - (int)(prohibited_position[1] - '0')][7] = 1;
    }
}

int main()
{
    Index index;
    queue<int> q;
    int col = 8;
    int row = 8;
    string white_king, black_king;
    int black_king_position_i = -1;
    int black_king_position_j = -1;

    vector<vector<int>> road(col, vector<int>(row));
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            road[i][j] = 0;
        }
    }

    vector<vector<int>> steps(col, vector<int>(row));
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            steps[i][j] = -1;
        }
    }

    cin >> white_king;
    King_1_position(white_king, q, steps);
    cin >> black_king;
    King_2_position(black_king, black_king_position_i, black_king_position_j);

    int n;
    string prohibited_position;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> prohibited_position;
        prohibited_position_save(prohibited_position, road);
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
        if (index.i + 1 != 8 && road[index.i + 1][index.j] == 0 && steps[index.i + 1][index.j] == -1)
        {
            q.push(index.i + 1);
            q.push(index.j);
            steps[index.i + 1][index.j] = steps[index.i][index.j] + 1;
        }
        if (index.j - 1 != -1 && road[index.i][index.j - 1] == 0 && steps[index.i][index.j - 1] == -1)
        {
            q.push(index.i);
            q.push(index.j - 1);
            steps[index.i][index.j - 1] = steps[index.i][index.j] + 1;
        }
        if (index.j + 1 != 8 && road[index.i][index.j + 1] == 0 && steps[index.i][index.j + 1] == -1)
        {
            q.push(index.i);
            q.push(index.j + 1);
            steps[index.i][index.j + 1] = steps[index.i][index.j] + 1;
        }
        if (index.i == black_king_position_i && index.j == black_king_position_j)
        {
            break;
        }
    }

    if (index.i == black_king_position_i && index.j == black_king_position_j)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
*/