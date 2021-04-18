// Task 8 Best student.cpp 

/* Write a program that will receive the number of students in the class, then the name of each and 5 subject exam grades. The program should display the name of the student with the highest average grade. */

/*
    Examples
    ====== Test #1 =======
    Input
    5
    Aram Avagyan 9 9 9 9 9
    Lusine Stepanyan 8 7 6 9 9
    Karen Kirakosyan 9 9 9 9 8
    Edvard Mirzoyan 6 6 6 6 6
    David Davtyan 8 9 9 8 9

    Output
    Aram Avagyan

    ====== Test #2 =======
    Input
    3
    Jon Smith 6 7 8 8 9
    Adam Hopkins 6 6 8 8 9
    Lidia Kirakosyan 6 7 9 8 9

    Output
    Lidia Kirakosyan
*/

// Option 1
#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
    int scores[5];
    float average_ball;
    string name;
    string last_name;
public:
    void SetName(string student_name)
    {
        name = student_name;
    }
    string GetName() const
    {
        return name;
    }
    void SetLastName(string student_last_name)
    {
        last_name = student_last_name;
    }
    string GetLastName() const
    {
        return last_name;
    }
    void SetScores(int student_scores[])
    {
        for (int i = 0; i < 5; i++)
        {
            scores[i] = student_scores[i];
        }
    }
    void CalcAverageBall()
    {
        float sum = 0;
        int indx = -1;
        for (int i = 0; i < 5; i++)
        {
            sum += scores[i];
            indx = i;
        }

        average_ball = sum / 5.0;
    }
    float GetAverageBall() const
    {
        return average_ball;
    }

};

int main()
{
    Students student;
    string name;
    string last_name;
    string out_Best_Student_name;
    string out_Best_Student_last_name;
    int n;
    int scores[5];
    float worst = 100, best = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> last_name;

        for (int j = 0; j < 5; j++)
            cin >> scores[j];

        student.SetName(name);
        student.SetLastName(last_name);
        student.SetScores(scores);
        student.CalcAverageBall();
        student.GetAverageBall();
        if (student.GetAverageBall() > best)
        {
            best = student.GetAverageBall();
            out_Best_Student_name = student.GetName();
            out_Best_Student_last_name = student.GetLastName();
        }
    }
    cout << out_Best_Student_name << " " << out_Best_Student_last_name;
}


/*
// Option 2
#include <iostream>
#include <vector>
#include <string>
class Student {
private:
    std::string mName;
    std::string mSurname;
    std::vector<int> mMarks;
public:
    Student(const std::string& name, const std::string& surname)
        : mName(name)
        , mSurname(surname)
    {
    }
    Student(const std::string& name, const std::string& surname, const std::vector<int>& marks)
        : mName(name)
        , mSurname(surname)
        , mMarks(marks)
    {
    }
    void input_marks()
    {
        const int marks_count = 20;
        int x;
        for (int i = 0; i < marks_count; ++i)
        {
            std::cin >> x;
            mMarks.push_back(x);
        }
    }
    double GPA() const
    {
        double sum = 0;
        for (int i = 0; i < mMarks.size(); ++i)
        {
            sum += mMarks[i];
        }
        return sum / mMarks.size();
    }
    std::string get_name() const
    {
        return mName;
    }
    std::string get_surname() const
    {
        return mSurname;
    }
};
Student find_max_student(const std::vector<Student>& students)
{
    double max_GPA = students[0].GPA();
    Student max_student = students[0];
    for (int i = 1; i < students.size(); ++i)
    {
        double current_GPA = students[i].GPA();
        if (current_GPA > max_GPA)
        {
            max_GPA = current_GPA;
            max_student = students[i];
        }
    }
    return max_student;
}
int main()
{
    int n;
    std::cin >> n;
    // Student* students = new Student[n];
    std::vector<Student> students; // std::vector<Student> students(n);
    for (int i = 0; i < n; ++i)
    {
        std::string name;
        std::string surname;
        std::cin >> name >> surname;
        Student s(name, surname);
        s.input_marks();
        students.push_back(s);
    }
    Student max_student = find_max_student(students);
    std::cout << max_student.get_name() << " " << max_student.get_surname();
}
*/