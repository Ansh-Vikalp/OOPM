#include <iostream>
#include <fstream>
using namespace std;

// Working with single file
// In it constrctor is used with object creation

int main()
{
    ofstream outf("Items.txt");

    cout << "Enter item name: " << endl;
    string name;
    cin >> name;

    outf << name << endl;

    cout << "Enter item cost: " << endl;
    int cost;
    cin >> cost;

    outf << cost << endl;

    outf.close();

    ifstream inf("Items.txt");
    inf >> name; // reads name from items.txt file
    inf >> cost;
    cout << endl;
    cout << "Item name: " << name << endl;
    cout << "item cost: " << cost << endl;

    inf.close();

    return 0;
}