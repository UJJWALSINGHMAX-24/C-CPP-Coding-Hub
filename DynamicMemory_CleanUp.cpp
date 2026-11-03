#include <iostream>
using namespace std;

int main()
{

    int SizeNum;

    cout << "\n>>> DYNAMIC MEMORY AND CLEAN-UP <<<\n\n";
    cout << "Apko Kitne Number Ki Memory [ RAM ] Chaiya ? Enter Your Size : ";
    cin >> SizeNum;

    int *DynamicMemory = new int[SizeNum];

    cout << "\nEnter Your " << SizeNum << " Number > \n\n";

    for (int a = 0; a < SizeNum; a++)
    {
        cout << "Number " << a + 1 << " : ";
        cin >> DynamicMemory[a];
    }

    cout << "\n>>> Your Entered Numbers [ From Dynamic RAM ] <<<\n\n";

    for (int a = 0; a < SizeNum; a++)
    {
        cout << "Element " << a << " : " << DynamicMemory[a] << " [ Address > " << (DynamicMemory + a) << " ]\n";
    }

    delete[] DynamicMemory;

    DynamicMemory = nullptr;

    cout << "\nMemory Successfully Deleted and RAM Cleaned.\n\n";

    return 0;
}