#include <iostream>
using namespace std;

class Intent
{
    int count;

public:
    Intent()
    {
        count = 0;
    }
    Intent(int i)
    {
        count = i;
    }

    Intent operator++()
    {
        ++count;
        return *this;
    }

    Intent operator++(int)
    {
        Intent temp(count);
        count++;
        return temp;
    }
    void showdata()
    {
        cout << count << endl;
    }
};

int main()
{
    Intent c, d, e, f;
    cout << "c= ";
    c.showdata();

    d = ++c;
    cout << "c= ";
    c.showdata();
    cout << "d= ";
    d.showdata();

    cout << "e= ";
    e.showdata();
    f = e++;
    cout << "e= ";
    e.showdata();
    cout << "f= ";
    f.showdata();

    return 0;
}