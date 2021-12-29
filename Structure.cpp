#include <iostream>
using namespace std;

struct employee
{
    int id;
    char favch;
    float salary;
} typedef em;

int main()
{
    /*                                      🤢General Points
    😋Note here how variables of struct employeee is created by simply employee e1.unlike C C++ doesn't need keyword
    like struct, union, enum while defining the variable e1.However if we want we can also define variable like
    struct employee e1 instead of employee e1.

    😵NOTE:-
    1) Structure is a user defined data type.
    2) Structure is a collection of heterogeneous data elements
    3) The total size of a structure is sum of size of all elements declared in it.
        EX- In the above example the toral size of employee is
                Int id--> 4 bytes
                + char favch--> 1 byte
                + float salary--> 4 bytes
                --------------------------
                Total = 9 bytes😲
    4) To prettify oue code we can also make use of typedef <<name>> to avoid use of repetidly struct employee or employee.
    5) Structure also able yo contain functions in it.


    */
    employee e1; // this can be also written as (em e1) or (struct employee e1)
    e1.favch = 'c';
    e1.id = 89;
    e1.salary = 7.8;

    cout << "id= " << e1.id << endl;
    cout << "favchar= " << e1.favch << endl;
    cout << "salary= " << e1.salary << endl;

    return 0;
}