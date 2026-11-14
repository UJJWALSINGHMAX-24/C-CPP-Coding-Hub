#include <iostream>
using namespace std;

int main()
{

    string food = "Pizza";
    string *Add1 = &food;
    string **Add2 = &Add1;

    cout << food << endl;
    cout << &Add1 << endl;
    cout << &Add2;

    return 0;
}