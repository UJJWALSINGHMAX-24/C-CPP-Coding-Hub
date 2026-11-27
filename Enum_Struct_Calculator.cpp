#include <iostream>
using namespace std;

enum AllOperation
{
    ADD = 0,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

struct Calculator
{
    double Num1;
    double Num2;
    AllOperation Operation;
    double Result;
};

bool AllCalculate(Calculator &Calcu)
{
    switch (Calcu.Operation)
    {
    case ADD:
        Calcu.Result = Calcu.Num1 + Calcu.Num2;
        return true;
    case SUBTRACT:
        Calcu.Result = Calcu.Num1 - Calcu.Num2;
        return true;
    case DIVIDE:
        if (Calcu.Num2 == 0)
        {
            cout << "Error ? Zero Divide Nhi Kiya Ja Sakta\n";
            return false;
        }
        Calcu.Result = Calcu.Num1 / Calcu.Num2;
        return true;
    }
    return false;
}

int main()
{
    Calculator Calc;
    int Choice;

    cout << "Enter Your First Number : ";
    cin >> Calc.Num1;
    cout << "Enter Your Second Number : ";
    cin >> Calc.Num2;

    cout << "\n1 : Add\n2 : Subtract\n3 : Multiply\n4 : Divide\n";
    cout << "Choose Operation : ";
    cin >> Choice;

    Calc.Operation = static_cast<AllOperation>(Choice);

    if (Choice >= 1 && Choice <= 4 && AllCalculate(Calc))
    {
        cout << "Result = " << Calc.Result << endl;
    }
    else if (Choice < 1 || Choice > 4)
    {
        cout << "Invalid choice !\n";
    }

    return 0;
}