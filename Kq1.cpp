#include <typeinfo>
#include <iostream>
using namespace std;

class Ayush
{
public:
    virtual void xyz(){};
};

class derived1 : public Ayush
{
};

class derived2 : public Ayush
{
};
int main()
{
    Ayush *p1, *p2;
    derived1 d1;
    derived2 d2;
    // int yu = 8;
    // cout << typeid(yu).name() << endl;
    p1 = &d1;
    p2 = &d2;
    cout << typeid(p1).name() << endl;
    cout << typeid(d1).name() << endl;

    return 0;
}