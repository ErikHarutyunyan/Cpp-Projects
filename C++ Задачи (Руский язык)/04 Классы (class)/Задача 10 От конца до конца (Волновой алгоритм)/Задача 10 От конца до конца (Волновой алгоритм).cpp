// Задача 10 От конца до конца (Волновой алгоритм).cpp

/* На входе задается матрица размером 10х10, состоящая из нулей и единицы, необходимо отобразить YES, если можно попасть из левого верхнего угла в правый нижний, двигаясь на каждом шагу вверх по 1 ячейке, снизу, слева или справа и не пропуская ни одной, и NO в противном случае. Известно, что левый верхний и правый нижний углы ячейки всегда равны 0. Для решения проблемы можно использовать алгоритм канала. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
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

    Результат работы
    YES

    ====== Тест #2 =======
    Входные данные
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

    Результат работы
    NO

    ====== Тест #3 =======
    Входные данные
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

    Результат работы
    NO

    ====== Тест #4 =======
    Входные данные
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

    Результат работы
    NO

    ====== Тест #5 =======
    Входные данные
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

    Результат работы
    YES

    ====== Тест #6 =======
    Входные данные
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

    Результат работы
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
