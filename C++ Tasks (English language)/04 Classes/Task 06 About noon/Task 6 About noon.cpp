// Task 6 About noon.cpp

/* Write a program that implements the Time class, whose objects represent time. Time is provided by hours (from 0 to 23) and minutes (from 0 to 59) fields. The program should receive information about The time N in the input-hour and minute, and then say the closest time to noon. First, you need to display the time that comes before the day. */

/*
    Examples
    ====== Test #1 =======
    Input
    5
    10 58
    13 0
    12 0
    11 59
    20 6

    Output
    11 59
    12 0

    ====== Test #2 =======
    Input
    3
    10 25
    9 10
    14 25

    Output
    10 25
    14 25
*/

// Option 1
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
// Option 2
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
        Time *t = new Time[N];
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