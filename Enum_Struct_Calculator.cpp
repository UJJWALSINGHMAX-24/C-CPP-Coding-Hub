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

    return 0;
}