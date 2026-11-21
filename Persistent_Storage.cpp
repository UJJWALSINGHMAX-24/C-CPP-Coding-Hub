#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void savePlusHistory(int a, int b, int sum)
{
    ofstream outFile("History.txt", ios::app);
    if (outFile.is_open())
    {
        outFile << a << " + " << b << " = " << sum << "\n";
        outFile.close();
        cout << "History 'History.txt' mein save ho gayi!\n";
    }
    else
    {
        cout << "Error: 'History.txt' open nahi ho payi.\n";
    }
}

void showHistory()
{
    ifstream inFile("History.txt");
    string line;

    cout << "\n--- Saved Plus History ---\n";
    if (inFile.is_open())
    {
        bool hasData = false;
        while (getline(inFile, line))
        {
            cout << line << "\n";
            hasData = true;
        }
        if (!hasData)
        {
            cout << "(History khali hai)\n";
        }
        inFile.close();
    }
    else
    {
        cout << "(Abhi tak koi history file nahi bani hai)\n";
    }
    cout << "--------------------------\n";
}

void clearHistory()
{
    ofstream clearFile("History.txt", ios::trunc);
    if (clearFile.is_open())
    {
        clearFile.close();
        cout << "Permanent history clear kar di gayi hai!\n";
    }
    else
    {
        cout << "Error: History clear nahi ho payi.\n";
    }
}

int main()
{
    int choice;
    int a, b;

    while (true)
    {
        cout << "\n--- Plus Calculator ---\n\n";
        cout << "1. Plus [ + ]\n";
        cout << "2. Show History\n";
        cout << "3. Clear History\n";
        cout << "4. Exit\n\n";
        cout << "Choose Your Option : ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nEnter Your First Number : ";
            cin >> a;
            cout << "Enter Your Second Number : ";
            cin >> b;

            int sum = a + b;
            cout << "\nResult : " << a << " + " << b << " = " << sum << "\n\n";

            savePlusHistory(a, b, sum);
        }
        else if (choice == 2)
        {
            showHistory();
        }
        else if (choice == 3)
        {
            clearHistory();
        }
        else if (choice == 4)
        {
            cout << "Program band ho raha hai. Aapka data safe hai!\n";
            break;
        }
        else
        {
            cout << "Sirf 1 se 4 ke beech option chuno.\n";
        }
    }

    return 0;
}