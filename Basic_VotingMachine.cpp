#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Name, Country;
    int Age;

    cout << "\n -> VOTING MACHINE <-\n\n";

    cout << "Enter Your Name : ";
    getline(cin, Name);

    cout << "Enter Your Age : ";
    cin >> Age;

    if (Age < 18)
    {
        cout << "\nAge Minor , Under { 18 }\n";
        cout << "You Can Try When You Turn 18.\n\n";
        return 0;
    }

    cout << "Enter Your Country Name : ";
    cin >> Country;

    if (Country == "Bharat")
    {
        cout << "\nOld Enough To Vote.\n";
        cout << "You Successfully Vote.\n\n";
    }
    else
    {
        cout << "\nYou are not from Bharat. Cannot Vote here.\n\n";
    }

    return 0;
}