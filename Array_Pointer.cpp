#include <iostream>
using namespace std;

int main()
{

    int Array_1D[] = {10, 20, 30, 40, 50};
    int AllSize = 5;

    int *Start = Array_1D;
    int *End = Array_1D + (AllSize - 1);

    while (Start < End)
    {
        int Temp = *Start;
        *Start = *End;
        *End = Temp;
        Start++;
        End--;
    }

    cout << "Reversed Array : ";
    for (int a = 0; a < AllSize; a++)
    {
        cout << *(Array_1D + a) << " ";
    }

    return 0;
}