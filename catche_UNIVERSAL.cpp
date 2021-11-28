#include <iostream>
using namespace std;

void Test(int x)
{

    try
    {
        if (x == 1)
        {
            throw x;
        }

        if (x == 2)
        {
            throw 'x';
        }
        if (x == 3)
        {
            throw -6.5;
        }
        cout<<"End of Try-Block"<<endl;//This will not execute
    }
    catch (int x)
    {
        cout << "Exception caught " << x << endl;
    }

    catch (...)
    {
        cout << "Exception caught Universal"<< endl;
    }
    cout<<"End of Try-catch system"<<endl<<endl;
}

int main()
{
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout << "Testing multiple Catches" << endl;
    Test(1);
    Test(2);
    Test(3);
    return 0;
}