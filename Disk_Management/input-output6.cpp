#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    float a[4] = {175.5, 153.0, 167.25, 160.20};
    ofstream out;
    out.open("Array");
    out.write((char *)&a, sizeof(a)); // creates a binary file
    out.close();

    for (int i = 0; i < 5; i++)
    {
        a[i] = 0;
    }

    ifstream in;
    in.open("Array");
    in.read((char *)&a, sizeof(a)); // read a binary file

    for (int i = 0; i < 4; i++)
    {
        cout.setf(ios::showpoint);
        cout << setw(10) << setprecision(5) << a[i];
    }

    in.close();
    return 0;
}