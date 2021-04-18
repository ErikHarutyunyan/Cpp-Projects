// Խնդիր 14 Հեռացնել սյունը.cpp

/* Գրել ծրագիր, որը մուտքում կստանա K (1 ≤ K ≤ 5) թիվը, ապա 6x5 մատրիցի տարրերը՝ տող առ տող։ Անհրաժեշտ է հեռացնել մատրիցից K֊րդ սյունը և արտածել ստացված նոր մատրիցը։ Անհրաժեշտ է արտածել մատրիցի տարրերը տող առ տող՝ նույն տողի տարրերը բաժանելով միմյանցից բացատանիշով։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    2
    1  2  3  4 5
    6  7  8  9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
    26 27 28 29 30

    Ելք
    1 3 4 5
    6 8 9 10
    11 13 14 15
    16 18 19 20
    21 23 24 25
    26 28 29 30

    ====== Թեստ #2 =======
    Մուտք
    1  -1  -2  -3  -4 -5
    -6  -7  -8  -9 -10
    -11 -12 -13 -14 -15
    -16 -17 -18 -19 -20
    -21 -22 -23 -24 -25
    -26 -27 -28 -29 -30

    Ելք
    -2 -3 -4 -5
    -7 -8 -9 -10
    -12 -13 -14 -15
    -17 -18 -19 -20
    -22 -23 -24 -25
    -27 -28 -29 -30
    
    ====== Թեստ #3 =======
    Մուտք:101
    5  1  2  3  4 5
    6  7  8  9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
    26 27 28 29 30

    Ելք:71
    1 2 3 4
    6 7 8 9
    11 12 13 14
    16 17 18 19
    21 22 23 24
    26 27 28 29
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
        for (int j = 0; j < n; j++)
        {
            if (j + 1 == k)
                continue;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
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
        for (int j = 0; j < cols; j++)
        {
            if (j + 1 == k)
                continue;
            std::cout << dynMatrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < rows; ++i)
        delete[] dynMatrix[i];
    delete[] dynMatrix;
}
*/