#include <iostream>
using namespace std;
//Welcome
//Nice
// Now we will study second part of polymorphism i.e. Virtual function

class xyz
{
public:
    virtual void show()// Virtual keyword is used
    {
        cout << "Parent class" << endl;
    }
};

class abc : public xyz
{
public:
    void show()
    { // ✨function overiding
        cout << "Child class" << endl;
    }
};

int main()
{
    xyz *p, obj1;
    abc obj2;

    p = &obj1;  //👉⨘Base class pointer can store adress of itself object as well as child class object .
    p->show();  //⨘while child class Pointer can only stores address of it's object.

    p = &obj2;
    p->show();// 👉 Here late binding occurs due to which compiler see what's inside the content inside p.
    //calling of function with help of -> (arrow) operator
    return 0;
}