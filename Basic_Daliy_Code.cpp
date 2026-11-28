#include <iostream>
using namespace std;

double Result;

double AddLaw(double a, double b)
{
    Result = a + b;
    return Result;
}

double SubtractLaw(double a, double b)
{
    Result = a - b;
    return Result;
}

double MultiplyLaw(double a, double b)
{
    Result = a * b;
    return Result;
}

bool DivideLaw(double a, double b)
{
    if (b == 0)
    {
        return false;
    }
    Result = a / b;
    return true;
}

int main()
{
    bool Calc_On_Off = true;

    while (Calc_On_Off)
    {
        char Option;

        cout << endl
             << "---> SMART CALCULATOR <---" << endl
             << endl;
        cout << "Calculator On [ Press 1 ]" << endl;
        cout << "Calculator Off [ Press 2 ]" << endl
             << endl;
        cout << "Choose Your Option : ";
        cin >> Option;

        if (Option == '1')
        {
            char Choice;
            double Num1, Num2;
            bool IsValid = true;

            cout << "\nCalculator On\n\n";
            cout << "Enter Your First Number : ";
            cin >> Num1;
            cout << "Choose Your Operator [ + , - , * , / ] : ";
            cin >> Choice;
            cout << "Enter Your Second Number : ";
            cin >> Num2;

            if (Choice == '+')
            {
                AddLaw(Num1, Num2);
            }
            else if (Choice == '-')
            {
                SubtractLaw(Num1, Num2);
            }
            else if (Choice == '*')
            {
                MultiplyLaw(Num1, Num2);
            }
            else if (Choice == '/')
            {
                if (!DivideLaw(Num1, Num2))
                {
                    cout << "\nError ? Zero Divide Nhi Kiya Ja Sakta.\n";
                    IsValid = false;
                }
            }
            else
            {
                cout << "\nChoose Invalid Operator\n";
                IsValid = false;
            }

            if (IsValid)
            {
                cout << endl
                     << "Result : " << Num1 << " " << Choice << " " << Num2 << " = " << Result << endl;
            }
        }
        else if (Option == '2')
        {
            cout << "\nCalculator Off\n";
            Calc_On_Off = false;
        }
        else
        {
            cout << "\nInvalid Option! Press 1 or 2.\n";
        }
    }

    return 0;
}