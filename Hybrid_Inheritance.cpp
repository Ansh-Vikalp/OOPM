#include <iostream>
using namespace std;
class base
{
protected:
    int data;

public:
    base()
    {
        data = 500;
    }
};

class derived1 : virtual public base //🧵declaring parent1 as virtual so only one copy get into child
{
};
class derived2 : virtual public base //🧵declaring parent2 as virtual so only one copy get into child
{
};

class child : public derived1, derived2
{
public:
    void getdata()
    {
        cout << "data: " << data << endl;
    }
};

int main()
{
    class child c;
    c.getdata();
    return 0;
}