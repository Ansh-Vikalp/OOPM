#include <bits/stdc++.h>
#include <iostream>
using namespace std;

template <class T>

// template <typename T>
// This program gives error when used with T &x, T &y or adress operator 🙄 Why??
void swap(T *x, T *y)
{
    T *temp;
    *temp = *x;
    *x = *y;
    *y = *temp;
}

int main()
{
    int m = 100, n = 200;
    float a = 9.7, b = 3.6;
    cout << "m and n before swapping " << m << " " << n << endl;
    swap(&m, &n);
    cout << "m and n after swapping " << m << " " << n << endl;

    cout << endl;

    cout << "a and b before swapping " << a << " " << b << endl;
    swap(&a, &b);
    cout << "a and b after swapping " << a << " " << b << endl;
    return 0;
}

