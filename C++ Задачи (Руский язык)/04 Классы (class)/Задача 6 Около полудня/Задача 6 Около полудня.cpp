// Задача 6 Около полудня.cpp

/* Напишите программу, реализующую класс Time, объекты которого представляют время. Время обеспечивается полями часов (от 0 до 23) и минут (от 0 до 59). Программа должна получить информацию о времени N во входных часах и минутах, а затем сказать ближайшее время до полудня. Сначала необходимо отобразить время, которое приходит до полудня. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    5
    10 58
    13 0
    12 0
    11 59
    20 6

    Результат работы
    11 59
    12 0

    ====== Тест #2 =======
    Входные данные
    3
    10 25
    9 10
    14 25

    Результат работы
    10 25
    14 25
*/

// Вариант 1
#include <iostream>
#include <ctime>
using namespace std;

class Time
{
public:
    int hours;
    int minutes;
};

int main()
{
    int N;
    cin >> N;
    Time *t = new Time[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> t[i].hours >> t[i].minutes;
    }
    const int halfday = 12 * 60;
    int i_t1, i_t2;
    int abs_t1, abs_t2;
    i_t1 = 0;
    abs_t1 = halfday;
    for (int i = 1; i < N; ++i)
        if (abs(halfday - (t[i].hours * 60 + t[i].minutes)) < abs_t1)
        {
            i_t1 = i;
            abs_t1 = abs(halfday - (t[i].hours * 60 + t[i].minutes));
        }

    i_t2 = i_t1;
    abs_t2 = halfday;
    for (int i = 0; i < N; ++i)
        if ((abs(halfday - (t[i].hours * 60 + t[i].minutes)) <= abs_t2) && (i != i_t1))
        {
            i_t2 = i;
            abs_t2 = abs(halfday - (t[i].hours * 60 + t[i].minutes));
        }
    if ((t[i_t1].hours * 60 + t[i_t1].minutes) > (t[i_t2].hours * 60 + t[i_t2].minutes))
    {
        int tmp = i_t1;
        i_t1 = i_t2;
        i_t2 = tmp;
    }
    cout << t[i_t1].hours << " " << t[i_t1].minutes << endl;
    cout << t[i_t2].hours << " " << t[i_t2].minutes << endl;

    delete[] t;
    return 0;
}

/*
// Вариант 2
#include <iostream>
#include <ctime>
using namespace std;

class Time
{
private:

    int hours;
    int minutes;

public:

    void approach_halfday(int N)
    {
        Time* t = new Time[N];
        for (int i = 0; i < N; ++i)
            cin >> t[i].hours >> t[i].minutes;

        const int halfday = 12 * 60;

        int i_t1, i_t2;
        int abs_t1, abs_t2;

        i_t1 = 0;
        abs_t1 = halfday;

        for (int i = 1; i < N; ++i)
            if (abs(halfday - (t[i].hours * 60 + t[i].minutes)) < abs_t1)
            {
                i_t1 = i;
                abs_t1 = abs(halfday - (t[i].hours * 60 + t[i].minutes));
            }

        i_t2 = i_t1;
        abs_t2 = halfday;

        for (int i = 0; i < N; ++i)
            if ((abs(halfday - (t[i].hours * 60 + t[i].minutes)) <= abs_t2) && (i != i_t1))
            {
                i_t2 = i;
                abs_t2 = abs(halfday - (t[i].hours * 60 + t[i].minutes));
            }


        if ((t[i_t1].hours * 60 + t[i_t1].minutes) > (t[i_t2].hours * 60 + t[i_t2].minutes))
        {
            int tmp = i_t1;
            i_t1 = i_t2;
            i_t2 = tmp;
        }
        cout << t[i_t1].hours << " " << t[i_t1].minutes << endl;
        cout << t[i_t2].hours << " " << t[i_t2].minutes << endl;

        delete[] t;
    }
};

int main()
{
    Time times;
    int N;
    cin >> N;
    times.approach_halfday(N);
}
*/