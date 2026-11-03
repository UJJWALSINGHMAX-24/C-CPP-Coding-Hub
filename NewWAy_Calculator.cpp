#include <iostream>
#include <vector>
#include <string>
using namespace std;

double AddLaw(double a, double b) { return a + b; }

double SubtractLaw(double a, double b) { return a - b; }

double MultiplyLaw(double a, double b) { return a * b; }

double DivideLaw(double a, double b)
{
    if (b == 0)
    {
        cout << "Error : Zero Divide Nhi Kiya Ja Sakta.\n";
        return 0;
    }
    return a / b;
}

void AllHistory(const vector<string> &InHistory)
{
    if (InHistory.empty())
    {
        cout << "History No Available.\n";
    }
    else
    {
        for (size_t a = 0; a < InHistory.size(); a++)
        {
            cout << a + 1 << " : " << InHistory[a] << endl;
        }
    }
}

int main()

{

    vector<string> AllHistory;

    bool On = 1;

    while (On)
    {
        char Choice;
        double Num1, Num2;
        double Result;
    }

    return 0;
}