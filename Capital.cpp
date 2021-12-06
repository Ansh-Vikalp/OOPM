#include <iostream>
using namespace std;

int main()
{
    char a[100];
    cout << "Enter any string" << endl;
    cin >> a;

    for (int i = 0; i < 100; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] = a[i] + 32;
        }
        else if (a[i] >= 97 && a[i] <= 122)

        {
            a[i] = a[i] - 32;
        }
    }

    cout << a << endl;

    return 0;
}