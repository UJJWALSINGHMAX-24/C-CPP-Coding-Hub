#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum GradeLevel
{
    EXCELLENT,
    GOOD,
    AVERAGE,
    NEED_IMPROVEMENT
};

struct StudentSystem
{
    string Name;
    float RollNo;
    float Marks;
    GradeLevel Grade;
};

GradeLevel CalculateGrade(float Marks)
{
    if (Marks >= 85)
    {
        return EXCELLENT;
    }
    else if (Marks >= 70)
    {
        return GOOD;
    }
    else if (Marks >= 50)
    {
        return AVERAGE;
    }
    else
    {
        return NEED_IMPROVEMENT;
    }
}

void PrintGradeName(GradeLevel GradeRank)
{
    switch (GradeRank)
    {
    case EXCELLENT:
        cout << "Grade   : A ( Excellent )";
        break;
    case GOOD:
        cout << "Grade   : B ( Good )";
        break;
    case AVERAGE:
        cout << "Grade   : C ( Average )";
        break;
    case NEED_IMPROVEMENT:
        cout << "Grade   : D ( Need Improvement )";
        break;
    }
}

int main()
{
    vector<StudentSystem> Students;
    int Choice;

    do
    {
        cout << "\n---> STUDENT RECORD SYSTEM <---\n\n";
        cout << "1 :  Add New Student\n";
        cout << "2 :  View All Students\n";
        cout << "3 :  Exit\n";
        cout << "\nEnter Your Choice : ";
        cin >> Choice;

        if (Choice == 1)
        {
            StudentSystem View;

            cin.ignore();
            cout << "\nEnter Your Name : ";
            getline(cin, View.Name);

            cout << "Enter Your Roll Number : ";
            cin >> View.RollNo;
            cout << "Enter Your Marks : ";
            cin >> View.Marks;

            View.Grade = CalculateGrade(View.Marks);
            Students.push_back(View);

            cout << "\nStudent Record Added Successfully.\n";
        }
        else if (Choice == 2)
        {
            if (Students.empty())
            {
                cout << "No Record Found ! \n";
            }
            else
            {
                cout << "\n--> STUDENT HISTORY <--\n\n";
                for (size_t a = 0; a < Students.size(); a++)
                {
                    cout << " STUDENT - " << a + 1 << "\n\n";
                    cout << "  Name    : " << Students[a].Name << endl;
                    cout << "  Roll No : " << Students[a].RollNo << endl;
                    cout << "  Marks   : " << Students[a].Marks << endl;
                    cout << "  ";
                    PrintGradeName(Students[a].Grade);
                    cout << "\n\n-------------------------\n";
                }
            }
        }
        else if (Choice == 3)
        {
            cout << "\nExiting Program. Goodbye !\n\n";
        }
        else
        {
            cout << "Invalid choice ! Try Again.\n";
        }

    } while (Choice != 3);

    return 0;
}