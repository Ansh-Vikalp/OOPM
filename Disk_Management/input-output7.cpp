#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Inventory
{
    char name[10];
    int code;
    int cost;

public:
    void set_data(void);
    void get_data(void);
};

void Inventory::set_data()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter sub-code: ";
    cin >> code;
    cout << "Enter cost: ";
    cin >> cost;
    cout << endl
         << endl;
}

void Inventory::get_data()
{
    cout << setw(10) << name
         << setiosflags(ios::left)
         << setiosflags(ios::right)
         << setw(10) << code
         << setprecision(5) << setw(10)
         << cost << endl;
}
int main()
{
    Inventory items[3];

    fstream file;
    file.open("MY_INVENTORY.txt", ios::in | ios::out);
    for (int i = 0; i < 3; i++)
    {
        items[i].set_data();
        file.write((char *)&items[i], sizeof(items[i]));
    }

    file.seekg(0);
    cout << "OUTPUT: " << endl;
    for (int i = 0; i < 3; i++)
    {
        file.read((char *)&items[i], sizeof(items[i]));
        items[i].get_data();
    }
    file.close();

    return 0;
}