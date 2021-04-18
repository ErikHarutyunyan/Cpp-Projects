// Խնդիր 18  Ամենամեծ բացասական թիվ.cpp

/* Պահանջվում է գրել ծրագիր, որը մուտքում ստանում է n (n ≤ 1000) բնական թիվ, ապա a1, a2, a3, ... an ամբողջ թվերի հաջորդականությունը և կարտածի ամենամեծ բացասական թիվը և դրա կարգահամարը, այդպիսին չլինելու դեպքում ՛0 -1՛։ Խնդիրը լուծելիս օգտագործել զանգված։ */

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    4 4 3 2 1

    Ելք
    0 -1
    ====== Թեստ #2 =======
    Մուտք
    4 10 3 -1 5

    Ելք
    -1 2
    ====== Թեստ #3 =======
    Մուտք
    5 15 1478 -5 -478 -12

    Ելք
    -5 2
*/

// Տարբերակ 1
#include <iostream>

int main()
{
    int n;
    int arr[1000];
    int index = -1;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 && index == -1)
        {
            index = i;
        }
        else if (arr[i] < 0 && arr[i] > arr[index])
        {
            index = i;
        }
    }

    if ((arr[index] > -1))
    {
        std::cout << 0 << ' ' << -1;
    }
    else
    {
        std::cout << arr[index] << ' ' << index;
    }
}

/*
// Տարբերակ 2
#include <iostream>

int main()
{
    int index, i, N, x;
    x = 0;
    int arr[1000]{};
    std::cin >> N;
    for (i = 0; i < N; i++)
    {
        std::cin >> arr[i];
    }
    index = -1;
    for (i = 0; i < N; i++)
    {
        if (arr[i] < 0 && index == -1)
        {
            index = i;
            x = arr[i];
        }
        else if (arr[i] < 0 && arr[i] > arr[index])
        {
            index = i;
            x = arr[index];
        }
        else
        {
            // arr[index]=-1;
        }
    }
    std::cout << x << " " << index;
}
*/