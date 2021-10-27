#include <iostream>
using namespace std;

class cd; // Predeclation of class cd as obj of class cd is passed as a argument

class ab
{
    int a;

public:
    friend void sum(ab p, cd q); // Making Sum as a friend function of class ab;
    void in_ab()
    {
        cout << "a = " << endl;
        cin >> a;
    }
};

class cd
{
    int b;

public:
    friend void sum(ab p, cd q); // Making Sum as a friend function of class ab;
    void in_cd()
    {
        cout << "b = " << endl;
        cin >> b;
    }
};

void sum(ab p, cd q)
{
    cout << "Sum = " << p.a + q.b << endl;
}

int main()
{
    ab obj1;
    cd obj2;

    obj1.in_ab();
    obj2.in_cd();

    sum(obj1, obj2); // object passing inside friend Function;

    return 0;
}