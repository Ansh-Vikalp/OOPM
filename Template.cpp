#include <iostream>
using namespace std;

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename p, typename q>
q myMax(p x, q y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << myMax<int, double>(3, 7.0) << endl;
    cout << myMax<double>(3.0, 7.0) << endl;
    cout << myMax<char>('g', 'e') << endl;

    return 0;
}
