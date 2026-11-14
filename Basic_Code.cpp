#include <iostream>
using namespace std;

int main()
{

    int Num1, Num2;
    char Choice;

    cout << endl
         << "   CALCULATOR    " << endl
         << endl;

    cout << "Enter Your First Number : ";
    cin >> Num1;

    cout << "Enter Your Second Number : ";
    cin >> Num2;

    cout << "Your Operator + Hai : ";
    cin >> Choice;

    if (Choice == '+')
    {
        Num1 + Num2;
    }

    int Result = Num1 + Num2;

    cout << "Result Is : " << Num1 << Choice << Num2 << " = " << Result;

    return 0;
}