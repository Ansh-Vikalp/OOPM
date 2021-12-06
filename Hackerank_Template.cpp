#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
template <class t>
class AddElements
{
    t a;

public:
    AddElements(t x)
    {
        a = x;
    } 
    t add(t y)
    {
        return a + y;
    }
};
// class template spealization


/* when we require a special seperate implementation of diffrent data type which will not suits template class 
    but we need same class
*/

template <>
class AddElements<string>
{

    string s;

public:
    AddElements(string arg)
    {
        s = arg;
    }
    string concatenate(string b)
    {
        return s + b;
    }
};

int main()
{
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string type;
        cin >> type;
        if (type == "float")
        {
            double element1, element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat(element1);
            cout << myfloat.add(element2) << endl;
        }
        else if (type == "int")
        {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint(element1);
            cout << myint.add(element2) << endl;
        }
        else if (type == "string")
        {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring(element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
