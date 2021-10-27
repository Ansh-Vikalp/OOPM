#include <iostream>
using namespace std;
class ab
{
    int a;
    static int b;

public:
    ab()
    {
        a = ++b;
    }
    void ina()
    {
        cout << "A = " << a << endl;
    }

    static void inb()
    {
        cout << "B = " << b << endl;
    }
};

int ab::b;

int main()
{
    ab obj;
    obj.ina();
    obj.inb();

    return 0;
}