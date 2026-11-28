#include <iostream>
using namespace std;

int main()
{

    int Pin = 123456;
    int EnterPin;
    double AllBalance = 10000.00;
    int UserChoice;

    cout << "\nEnter Your 6 Digit Pin : ";
    cin >> UserChoice;

    if (EnterPin != Pin)
    {
        cout << "Wrong Pin ! Access Denied\n";
        return 0;
    }
    cout << "\nPin Verified > Welcome\n";

    while (true)
    {
        cout << endl
             << "-> ATM MACHINE <-" << endl
             << endl;
        cout << "1 : Check Balance\n";
        cout << "2 : Deposit Money\n";
        cout << "3 : Withdraw Money\n\n";
        cout << "Choose Option [ 1 To 4 ] : ";
        cin >> UserChoice;

        if (UserChoice == 1)
        {
            cout << "Current Balance - Rs : " << AllBalance;
        } else if (UserChoice == 2){
            double AllAmount;
            cout<<"Enter Your Deposit Amount : ";
            cin>>AllAmount; 
        } else if (UserChoice == 4){
            
        }
    }

    return 0;
}