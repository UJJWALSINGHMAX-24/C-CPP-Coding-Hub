#include <iostream>
using namespace std;

int main()
{

    int Candidate1Votes = 0;
    int Candidate2Votes = 0;
    int Candidate3Votes = 0;

    int Choice;

    while (true)
    {

        cout << endl
             << " -> SIMPLE VOTING SYSTEM <-" << endl
             << endl;
        cout << "1 > Vote Candidate Party : BJP" << endl;
        cout << "2 > Vote Candidate Party : BSP" << endl;
        cout << "3 > Vote Candidate Party : TML" << endl;
        cout << "4 > Show History & Exit " << endl;
        cout << endl
             << "Choose Your Option [ 1 > 4 ] : ";
        cin >> Choice;

        if (Choice == 1)
        {
            Candidate1Votes++;
            cout << "\nYou Successfully Vote BJP Party" << endl;
        }
        else if (Choice == 2)
        {
            Candidate2Votes++;
            cout << "You Successfully Vote BSP Party" << endl;
        }
        else if (Choice == 3)
        {
            Candidate3Votes++;
            cout << "You Successfully Vote TML Party" << endl;
        }
        else if (Choice == 4)
        {
            cout << endl;
            cout << "Candidate BJP " << Candidate1Votes << " : Votes" << endl;
            cout << "Candidate BSP " << Candidate2Votes << " : Votes" << endl;
            cout << "Candidate TML " << Candidate3Votes << " : Votes" << endl
                 << endl;
            break;
            ;
        }

        else
        {
            cout << endl
                 << "Error ! Choose Wrong Option & Choose Option 1 to 4\n";
        }
    }

    return 0;
}