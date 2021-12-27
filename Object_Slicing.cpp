#include <iostream>
using namespace std;
class base
{
private:
    int i;

public:
    base(int ii)
    {
        i = ii;
    }

    virtual void fun1()
    {
        cout << i << endl;
    }
};

class derived : public base
{
private:
    int j;

public:
    derived(int ii, int jj) : base(ii)
    {
        j = jj;
    }

    void fun1()
    {
        base::fun1();
        cout << j << endl;
    }
};

int main()
{
    base *ptr1;
    base *ptr2;
    base b1(10);
    derived d1(15, 20);

    ptr1 = &b1;
    ptr2 = &d1;

    ptr1->fun1();
    ptr2->fun1();

    //😎Now we are going to see procedure for object slicing
    /* Slicing simple means to cut out part same when we object slicing then the only part of base class is take out and
    rest get ignored*/
    cout << endl
         << endl;
    base &ref1 = b1;
    ref1.fun1();

    base &ref2 = d1;
    ref2.fun1();

    cout << endl
         << endl;

    b1 = d1; //😋Object got sliced only 15 is get copied from derived(15,20) this is helpful when we want to active only one data
    b1.fun1();

    return 0;
}