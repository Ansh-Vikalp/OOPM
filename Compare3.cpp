#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter any three no---- " << endl;
    cin >> a >> b >> c;

    int max = a > b ? a : b; //ternary if
    max = max > c ? max : c;

    if (max == a || max == b || max == c)
    {
        cout << "The greatest no. is: " << max;
    }

    return 0;
}