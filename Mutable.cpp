#include <iostream>
using namespace std;

class Car
{
    string Car_name;
    string reg_no;
    int yr_manu;
    mutable string Owner;

public:
    Car(string name, string reg, int year, string own)
    {
        Car_name = name;
        reg_no = reg;
        yr_manu = year;
        Owner = own;
    }

    void get_data() const
    {
        cout << Car_name << endl;
        cout << reg_no << endl;
        cout << yr_manu << endl;
        cout << Owner << endl
             << endl;
    }

    void Change(string new_own) const
    {
        Owner = new_own;
    }
};

int main()
{
    Car const c1("Maruti 600", "MH-px9567", 2001, "Ansh Vikalp");
    c1.get_data();
    c1.Change("Nikesh Tiwari");
    c1.get_data();

    return 0;
}