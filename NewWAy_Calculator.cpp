#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

double AllResult = 0.0;

double AddLaw(double a, double b)
{
    AllResult = a + b;
    return AllResult;
}

double SubtractLaw(double a, double b)
{
    AllResult = a - b;
    return AllResult;
}

double MultiplyLaw(double a, double b)
{
    AllResult = a * b;
    return AllResult;
}

double DivideLaw(double a, double b)
{
    if (b == 0)
    {
        cout << "Error : Zero Divide Nhi Kiya Ja Sakta.\n";
        return 0;
    }
    AllResult = a / b;
    return AllResult;
}

void FullHistory(const vector<string> &InHistory)
{
    if (InHistory.empty())
    {
        cout << "History No Available.\n";
    }
    else
    {
        for (size_t a = 0; a < InHistory.size(); a++)
        {
            cout << a + 1 << " > " << InHistory[a] << endl;
        }
    }
}

int main()
{
    vector<string> AllHistory;
    bool Calc_On_Off = 1;

    while (Calc_On_Off)
    {
        char UserChoice;
        double Num1, Num2;
        string AllRecord;

        cout << "\n >>> SMART CALCULATOR <<<\n\n";
        cout << "Calculator On > Press [ C ] \n";
        cout << "Calculator Show History > Press [ H ]\n";
        cout << "Calculator Clear Memory > Press [ M ]\n";
        cout << "Calculator Quit > Press [ Q ]\n";
        cout << endl
             << "Choose Your Option > Press And Enter : ";

        cin >> UserChoice;

        if (UserChoice == 'C' || UserChoice == 'c')
        {
            cout << "\nEnter Your First Number : ";
            cin >> Num1;
            cout << "Choose Your Operator [ + , - , * , / ] : ";
            cin >> UserChoice;
            cout << "Enter Your Second Number : ";
            cin >> Num2;

            if (UserChoice == '+')
            {
                AddLaw(Num1, Num2);

                stringstream ss;
                ss << fixed << setprecision(2);
                ss << Num1 << " + " << Num2 << " = " << AllResult;
                AllRecord = ss.str();

                AllHistory.push_back(AllRecord);
            }
            else if (UserChoice == '-')
            {
                SubtractLaw(Num1, Num2);

                stringstream ss;
                ss << fixed << setprecision(2);
                ss << Num1 << " - " << Num2 << " = " << AllResult;
                AllRecord = ss.str();

                AllHistory.push_back(AllRecord);
            }
            else if (UserChoice == '*')
            {
                MultiplyLaw(Num1, Num2);

                stringstream ss;
                ss << fixed << setprecision(2);
                ss << Num1 << " * " << Num2 << " = " << AllResult;
                AllRecord = ss.str();

                AllHistory.push_back(AllRecord);
            }
            else if (UserChoice == '/')
            {
                if (Num2 == 0)
                {
                    DivideLaw(Num1, Num2);
                    continue;
                }
                DivideLaw(Num1, Num2);

                stringstream ss;
                ss << fixed << setprecision(2);
                ss << Num1 << " / " << Num2 << " = " << AllResult;
                AllRecord = ss.str();

                AllHistory.push_back(AllRecord);
            }
            else
            {
                cout << "Error : Choose Wrong Operator ? \n";
                continue;
            }

            cout << "\nResult : " << Num1 << " " << UserChoice << " " << Num2 << " = " << AllResult << endl;
        }
        else if (UserChoice == 'H' || UserChoice == 'h')
        {
            cout << endl
                 << " > ALL HISTORY <\n"
                 << endl;
            FullHistory(AllHistory);
        }
        else if (UserChoice == 'M' || UserChoice == 'm')
        {
            AllHistory.clear();
            cout << "\nAll Memory Successfully Cleared.\n";
        }
        else
        {
            cout << "\nCalculator OFF \n\n";
            Calc_On_Off = 0;
        }
    }

    return 0;
}