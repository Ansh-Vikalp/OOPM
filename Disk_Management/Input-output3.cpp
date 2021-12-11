#include <iostream>
#include <fstream>
// #include <stdlib.h>
using namespace std;

int main()
{
    ifstream ifile1;
    ifstream ifile2;

    ifile1.open("Country.txt");
    ifile2.open("Capital.txt");

    const int size = 80;
    char name[size];

    for (int i = 0; i < 10; i++)
    {

        if (ifile1.eof() != 0)
        {

            cout << "Exit from Country" << endl; // Here the loop terminates and with exit status 1
            exit(0);
        }
        ifile1.getline(name, size);
        cout << "Capital of " << name;

        if (ifile2.eof() != 0)
        {
            cout << "Exit from Capital" << endl;
            exit(0); // Here the loop terminates and with exit status 1
            // break;
        }

        ifile2.getline(name, size);
        cout << " is " << name << endl;
    }

    return 0;
}
