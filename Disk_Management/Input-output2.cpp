#include <iostream>
#include <fstream>
using namespace std;

// working with mutiple different files with same class object
// Here fuction open("File name") and close() is required

int main()
{
    ofstream out_f;
    out_f.open("Country.txt");
    out_f << "United states of America" << endl;
    out_f << "India" << endl;
    out_f << "Canada" << endl;

    out_f.close();

    out_f.open("Capital.txt");
    out_f << "Wasington" << endl;
    out_f << "Delhi" << endl;
    out_f << "Ottawa" << endl;

    out_f.close();

    ifstream in_f;
    in_f.open("Country.txt");
    int length = 80;
    char name[length];
    cout << "Name of some countries: " << endl;
    while (in_f)
    {
        in_f.getline(name, length);
        cout << name << endl;
    }

    in_f.close();

    in_f.open("Capital.txt");
    cout << "Name of some capital: " << endl;
    while (in_f)
    {
        in_f.getline(name, length);
        cout << name << endl;
    }

    in_f.close();

    return 0;
}