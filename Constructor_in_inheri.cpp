#include <iostream>
using namespace std;

class ab
{
public:
    ab()
    {
        cout << "ab constructor" << endl; //Base class constructor is called firstff
    }

    ~ab()
    {
        cout << "ab destructor" << endl; //Base class desstructor called after calling Base class constructor
    }
};

class cd : public ab
{
public:
    cd()
    {
        cout << "cd constructor" << endl; //Child class constructor called after calling Base class constructor
    }

    ~cd()
    {
        cout << "cd destructor" << endl; //Child class destructor called first
    }
};
int main()
{
    if (5 < 9)
    {

        cd obj;
    }

    return 0;
}


