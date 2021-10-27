#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter any three no---- " << endl;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "The no. " << a << " is greatest." << endl;
        }

        else
        {
            cout << "The no. " << c << " is greatest." << endl;
        }
    }

    else
    {
        if (b > c)
        {
            cout << "The no. " << b << " is greatest." << endl;
        }
        else
        {
            cout << "The no. " << c << " is greatest." << endl;
        }
    }

    return 0;
}