#include <iostream>
#include <vector>
using namespace std;

void Display(vector<int> &v)
{

    cout << "Current content: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Creating a container vector
    vector<int> v;
    cout << "Initial size: " << v.size() << endl;
    int x;

    cout << "Enter 5 vector elements" << endl;
    /* vector <int> :: iterator p;

     for (p=v.begin(); p!=v.end(); ++p)
     {
         cin >> x;           This also work in same way

         *p=x;
     }
     */
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    Display(v);
    cout << "The size after adding 5 elements " << v.size() << endl
         << endl;

    float y = 7.8;
    v.push_back(y); // This truncates to 7 as vector is collection of homgeneous elements
    Display(v);
    cout << "After adding 6th element" << endl;
    cout << "Size: " << v.size();
    cout << endl
         << endl;

    // Creating a vector iterator
    vector<int>::iterator itr;
    itr = v.begin();
    itr = itr + 3;

    v.insert(itr, 9);
    Display(v);
    cout << "After adding 7th element at 4th position" << endl;
    cout << "Size: " << v.size() << endl
         << endl;

    // Deleting elements from vector
    v.erase(v.begin() + 3, v.begin() + 5);
    cout << "Poping out two elements" << endl;
    Display(v);
    cout << "Size: " << v.size() << endl;

    return 0;
}