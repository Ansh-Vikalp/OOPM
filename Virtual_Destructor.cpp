#include <iostream>
using namespace std;
//😎In this program we are going to understand the concept of virtual destructor
class Base
{
public:
    Base()
    {
        cout << "In Base class costructor" << endl;
    }

    virtual ~Base()
    {
        cout << "In Base class Destructor" << endl;
    }
};

class Derived : public Base
{

public:
    Derived()
    {
        cout << "In derived class constructor" << endl;
    }

    ~Derived()
    {
        cout << "In derived class Desructor" << endl;
    }
};

int main()
{
    Base *ptr;
    // Derived d;
    ptr = new Derived;
    delete ptr;

    return 0;
}