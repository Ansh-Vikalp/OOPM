#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the height: ";
    cin >> n;
    PlaySound("Start.wav", NULL, SND_SYNC);
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
        Sleep(1000);
    }

    return 0;
}