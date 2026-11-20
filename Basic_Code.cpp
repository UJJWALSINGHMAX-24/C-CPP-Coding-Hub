#include <iostream>
using namespace std;

int main()
{

    int New;
    cout << "\nHow Many Player Score Store : ";
    cin >> New;
    cout << endl;

    int *Scores = new int[New];

    for (int a = 0; a < New; a++)
    {
        cout << "Player " << a + 1 << "  Score : ";
        cin >> *(Scores + a);
    }

    int *MaxScore = Scores;
    for (int a = 0; a < New; a++)
    {
        if (*(Scores + a) > *MaxScore)
        {
            MaxScore = (Scores + a);
        }
    }
    cout << endl
         << "Highest Score : " << *MaxScore << " [ Memory Address : " << MaxScore << " ]\n"
         << endl;

    delete[] Scores;
    Scores = nullptr;

    return 0;
}