#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout << "Ansh" << endl;
    }
};
class Derived : public Base
{
public:
    void fun()
    {
        cout << "Ayush" << endl;
    }

    Derived()
    {
        Base *b, ob;
        b = &ob;
        b->fun();
    }
};

int main()
{
    Derived d;

    return 0;
}