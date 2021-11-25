#include <iostream>
using namespace std;

void xyz(int h)
{
    int e;
    cout << "Enter any Number: " << endl;
    cin >> e;
    if (e == 6)
    {

        throw e;
    }
}

int main()
{

    try
    {
        xyz(9);
    }
    catch (int q)
    {
        cout << "Error! code Ayush " << q;
    }

    return 0;
}