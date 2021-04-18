// Խնդիր 13  Հեռացնել տողը.cpp

/* Գրել ծրագիր, որը մուտքում կստանա K (1 ≤ K ≤ 6) թիվը, ապա 6x5 մատրիցի տարրերը՝ տող առ տող։ Անհրաժեշտ է հեռացնել մատրիցից K֊րդ տողը և արտածել ստացված նոր մատրիցը։ Անհրաժեշտ է արտածել մատրիցի տարրերը տող առ տող՝ նույն տողի տարրերը բաժանելով միմյանցից բացատանիշով։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    2  1  2  3  4 5
    6  7  8  9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
    26 27 28 29 30

    Ելք
    1 2 3 4 5
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
    26 27 28 29 30

    ====== Թեստ #2 =======
    Մուտք
    1  -1  -2  -3  -4 -5
    -6  -7  -8  -9 -10
    -11 -12 -13 -14 -15
    -16 -17 -18 -19 -20
    -21 -22 -23 -24 -25
    -26 -27 -28 -29 -30

    Ելք
    -6 -7 -8 -9 -10
    -11 -12 -13 -14 -15
    -16 -17 -18 -19 -20
    -21 -22 -23 -24 -25
    -26 -27 -28 -29 -30

    ====== Թեստ #3 =======
    Մուտք
    6  1  2  3  4 5
    6  7  8  9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
    26 27 28 29 30

    Ելք
    1 2 3 4 5
    6 7 8 9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
*/

// Տարբերակ 1
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m = 6;
    int n = 5;
    int k;
    cin >> k;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }
    for (int i = 0; i < m; i++)
    {
        if (i + 1 == k)
            continue;
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
}

/*
// Տարբերակ 2
#include <iostream>

int main()
{
    int rows = 6;
    int cols = 5;
    int k;
    std::cin >> k;
    int **dynMatrix = new int *[rows];
    for (int i = 0; i < rows; ++i)
        dynMatrix[i] = new int[cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cin >> dynMatrix[i][j];
    }
    for (int i = 0; i < rows; i++)
    {
        if (i + 1 == k)
            continue;
        for (int j = 0; j < cols; j++)
            std::cout << dynMatrix[i][j] << " ";
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < rows; ++i)
        delete[] dynMatrix[i];
    delete[] dynMatrix;
}
*/