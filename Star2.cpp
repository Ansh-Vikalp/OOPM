#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = n - 1; j >= i; j--)
        {
            if (j > i)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
        Sleep(1000);
    }
    return 0;
}
