#include <iostream>
using namespace std;

// In this program we understand use of goto;

int main()
{
label:
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << endl;

    if (age <= 18)
    {
        cout << "You re not permitted" << endl;
        goto label;
    }

    else
    {
        cout << "Welcome to party!" << endl;
    }

    return 0;
}