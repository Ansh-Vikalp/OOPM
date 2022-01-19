#include <iostream>
#include "Employee.cpp"
using namespace std;

/*                                        👺Driver Program
This is the main Driver/Main/Client program here we only showing user particular implementation
and hided our logic inside Employee.cpp file but since we using member fun and data so, we must have
to include that file as #include "Employee.cpp" and not "Employee.h" as this file only contains declaration
and prototyping of essential function that can be used laterly

*/

int main()
{
    Employee e1("Rambabu", 24), e2;
    e1.get_data();

    e2.set_data();
    e2.get_data();
    return 0;
}