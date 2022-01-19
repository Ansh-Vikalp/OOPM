#include <iostream>
#include <cstring>
using namespace std;

/*                                              🐱‍👤Skeleton
This is heder file Employee.h which only contains skelatol part of our program or templates/Prototyping
*/

class Employee
{
private:
    int age;
    string name;

public:
    Employee();
    Employee(string, int);
    void set_data();
    void get_data();
};
