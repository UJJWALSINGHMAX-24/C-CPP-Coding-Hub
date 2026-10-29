#include <iostream>
#include <string>
#include <vector>
#include <functional>
using namespace std;

int main()
{

    string YouContinue;

    while (true)
    {

        string UserName;
        string UserCountry;
        int UserAge;

        cout << "-------------------------------\n";
        cout << "       VOTING MACHINE\n";
        cout << "-------------------------------\n\n";

        cout << "Enter Your Name : ";
        getline(cin, UserName);

        cout << "Enter Your Age : ";

        cin >> UserAge;
        cin.ignore(10000, '\n');

        cout << "Enter Your Country Name : ";

        cin >> UserCountry;
        cin.ignore(10000, '\n');

        if (UserAge >= 18 && UserCountry == "Bharat")
        {
            cout << "You Are Eligible For Vote!\n";
        }
        else if (UserCountry != "Bharat")
        {
            cout << "You Are Not a Bharat Member.\n";
        }
        else
        {
            cout << "Age Minor [ Under 18 ].\n";
        }

        cout << "\nDo you want to EXIT ? (Press 'N' to stop, or any other key to continue): ";

        cin >> YouContinue;
        cin.ignore(10000, '\n');

        if (YouContinue == "N" || YouContinue == "n")
        {
            cout << "Machine Shutting Down.\n";
            break;
        }

        cout << "\n";
    }

    return 0;
}
