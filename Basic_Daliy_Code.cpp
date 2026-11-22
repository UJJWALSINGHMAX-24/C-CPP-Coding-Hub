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

double MUltiplyLaw(double a, double b)
{
    Result = a * b;
    return Result;
}

double DivideLaw(double a, double b)
{
    if (b == 0)
    {
        cout << "Error ? Zero Divide Nhi Kiya Ja Sakta Hai !\n";
    }
    Result = a / b;
    return Result;
}

int main()
{

    bool Calc_On_Off = 1;

    while (Calc_On_Off)
    {

        char Option;
        char Choice;
        double Num1, Num2;

        cout << endl
             << "---> SMART CALCULATOR <---" << endl
             << endl;
        cout << "Calculator On [ Press 1 ]" << endl;
        cout << "Calculator Off [ Press 2]" << endl
             << endl;

        if (Option == 1)
        {
            cout << "Calculator On\n";
        }
    }

    return 0;
}