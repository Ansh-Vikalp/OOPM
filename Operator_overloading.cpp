#include <iostream>
using namespace std;

class Example
{
    int i;
    float j;

public:
    Example(int ii = 0, float jj = 0.00)
    {
        i = -ii;
        j = jj;
    }

    Example operator*(Example e);
    void Display();
};

Example Example::operator*(Example e)
{
    Example temp;
    temp.i = i * e.i;
    temp.j = j * e.j;
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
    e4 = e1 * 2;
    e4.Display();
    //😎👉 e5=2.e1; This statement will not work as we can not call any function by an int value
    return 0;
}