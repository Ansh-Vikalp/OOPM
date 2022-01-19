#include <iostream>
#include <cstring>
#include "Employee.h"
using namespace std;

/*                                      👹Secure File
This is Employee.cpp file where we actually implemented our logic of program
and written essential definations to declared functions and constructor in Employee.h header file
so, we must have to include "Employee.h" header file firstely in order to use class
*/

Employee::Employee()
{
    age = 0;
    name = "";
}

Employee::Employee(string n, int a)
{
    name = n;
    age = a;
}

void Employee::set_data()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "\nEnter age: ";
    cin >> age;
    cout << endl;
}

void Employee::get_data()
{
    cout << "Employee--> " << name << " age--> " << age << endl;
}
