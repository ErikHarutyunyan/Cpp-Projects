// Задача 7 Последние часы.cpp

/* Напишите программу, реализующую класс TimeS, объекты которого представляют время. Время обеспечивается полями часов (от 0 до 23), мин (от 0 до 59) и секунд (от 0 до 59). Программа должна получить N информации о времени - час, минуту и секунды, а затем всплыть в самое позднее время суток.*/

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    5
    11 59 15
    10 10 23
    20 58 58
    23 29 30
    23 29 59

    Результат работы
    23 29 59

    ====== Тест #2 =======
    Входные данные
    5
    0 0 0
    0 0 1
    0 0 2
    0 0 3
    0 0 4

    Результат работы
    0 0 4

    ====== Тест #3 =======
    Входные данные
    1
    23 59 59

    Результат работы
    23 59 59

    ====== Тест #4 =======

    Входные данные
    2
    23 59 58
    23 59 59

    Результат работы
    23 59 59

    ====== Тест #5 =======
    Входные данные
    2
    23 59 59
    23 59 58

    Результат работы
    23 59 59

    ====== Тест #6 =======
    Входные данные
    3
    1 0 0
    2 0 1
    2 0 0

    Результат работы
    2 0 1
*/

// Вариант 1
#include <iostream>
#include <limits>
using namespace std;

class TimeS
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    void latest_hours(int N)
    {
        int max = std::numeric_limits<int>::min();
        int max_2 = max;
        int max_3 = max;
        int i_t1 = 0;
        int i_t2 = 0;
        int i_t3 = 0;
        int count = max;
        TimeS *t = new TimeS[N];

        for (int i = 0; i < N; ++i)
            cin >> t[i].hours >> t[i].minutes >> t[i].seconds;

        for (int i = 0; i < N; i++)
        {
            if (N == 1)
                count = 0;
            if (t[i].hours > max)
            {
                i_t1 = i;
                max = t[i].hours;
            }
            if (t[i].minutes > max_2)
            {
                i_t2 = i;
                max_2 = t[i].minutes;
            }
            if (t[i].seconds > max_3)
            {
                i_t3 = i;
                max_3 = t[i].seconds;
            }
        }
        if (i_t1 >= i_t2 && i_t1 >= i_t3)
            count = i_t1;
        if (i_t2 >= i_t1 && i_t2 >= i_t3)
            count = i_t2;
        if (i_t3 >= i_t1 && i_t3 >= i_t2)
            count = i_t3;

        std::cout << t[count].hours << " " << t[count].minutes << " " << t[count].seconds;

        delete[] t;
    }
};

int main()
{
    TimeS times;
    unsigned int N;
    cin >> N;
    times.latest_hours(N);
}

/*
// Вариант 2
#include <iostream>
#include <limits>
using namespace std;

class TimeS
{
public:
    int hours;
    int minutes;
    int seconds;
};

int main()
{

    int max = std::numeric_limits<int>::min();
    int max_2 = max;
    int max_3 = max;
    int i_t1 = 0;
    int i_t2 = 0;
    int i_t3 = 0;
    int count = max;
    unsigned int N;
    cin >> N;
    TimeS *t = new TimeS[N];

    for (int i = 0; i < N; ++i)
        cin >> t[i].hours >> t[i].minutes >> t[i].seconds;

    for (int i = 0; i < N; i++)
    {
        if (N == 1)
            count = 0;
        if (t[i].hours > max)
        {
            i_t1 = i;
            max = t[i].hours;
        }
        if (t[i].minutes > max_2)
        {
            i_t2 = i;
            max_2 = t[i].minutes;
        }
        if (t[i].seconds > max_3)
        {
            i_t3 = i;
            max_3 = t[i].seconds;
        }
    }
    if (i_t1 >= i_t2 && i_t1 >= i_t3)
        count = i_t1;
    if (i_t2 >= i_t1 && i_t2 >= i_t3)
        count = i_t2;
    if (i_t3 >= i_t1 && i_t3 >= i_t2)
        count = i_t3;

    std::cout << t[count].hours << " " << t[count].minutes << " " << t[count].seconds;

    delete[] t;
}
*/
