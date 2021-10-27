#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter any three no---- " << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "The no. " << a << " is greatest." << endl;
    }
    
    //if (b>a && b>c)
    else if (b > a && b > c)
    {
        cout << "The no. " << b << " is greatest." << endl;
    }

    //if (c>a && c>b)
    else
    {
        cout << "The no. " << c << " is greatest." << endl;
    }

    return 0;
}