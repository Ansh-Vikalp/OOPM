#include <iostream>
using namespace std;

class Example
{
    int i;
    float j;

public:
    Example(int ii = 0, float jj = 0.00)
    {
        i = ii;
        j = jj;
    }

    friend Example operator*(Example e, Example f);
    void Display();
};

Example operator*(Example e, Example f)
{
    Example temp;
    temp.i = e.i * f.i;
    temp.j = e.j * f.j;
    return temp;
}

void Example::Display()
{
    cout << "The value of int i: " << i << " and value of float j: " << j << endl;
}
int main()
{
    Example e1(10, 2.5), e2(2, 1.0), e3, e4, e5;
    e3 = e1 * e2;
    e3.Display();
    e4 = e1 * 2; //👉This statement will work
    e4.Display();
    e5 = 2 * e1; //👉Also this statement will work
    e5.Display();
    //😎👉 e5=2.e1; This statement will not work as we can not call any function by an int value
    return 0;
}