#include <iostream>
using namespace std;

int main()
{
    int Pin = 1234;
    int EnteredPin;
    double Balance = 10000.0;
    int Choice;

    cout << "Enter Your 4-Digit PIN: ";
    cin >> EnteredPin;

    if (EnteredPin != Pin)
    {
        cout << "Wrong PIN! Access Denied.\n";
        return 0;
    }

    cout << "\nPIN Verified! Welcome.\n";

    while (true)
    {
        cout << "\n--- ATM MENU ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Choose Option (1-4): ";
        cin >> Choice;

        if (Choice == 1)
        {
            cout << "Current Balance: Rs. " << Balance << "\n";
        }
        else if (Choice == 2)
        {
            double Amount;
            cout << "Enter Amount to Deposit: ";
            cin >> Amount;

            if (Amount > 0)
            {
                Balance += Amount;
                cout << "Deposited Rs. " << Amount << " Successfully.\n";
            }
            else
            {
                cout << "Invalid Amount! Amount must be greater than 0.\n";
            }
        }
        else if (Choice == 3)
        {
            double Amount;
            cout << "Enter Amount to Withdraw: ";
            cin >> Amount;

            if (Amount <= 0)
            {
                cout << "Invalid Amount! Amount must be greater than 0.\n";
            }
            else if (Amount > Balance)
            {
                cout << "Insufficient Balance! Available Balance: Rs. " << Balance << "\n";
            }
            else
            {
                Balance -= Amount;
                cout << "Please Collect Your Cash: Rs. " << Amount << "\n";
            }
        }
        else if (Choice == 4)
        {
            cout << "Thank You for Using ATM. Goodbye!\n";
            break;
        }
        else
        {
            cout << "Invalid Choice! Please select 1 to 4.\n";
        }
    }

    return 0;
}