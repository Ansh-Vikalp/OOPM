#include <iostream>
using namespace std;

void sum(int p = 1, float q = 2.25)
{
    cout << "Sum= " << p + q << endl;
}

int main()
{

    sum(2, 3.14);
    sum(7);
    sum(7.16); // Note imp📌  This value get truncated to int as in the parameter of function sum() first integer is passed noe we can not pass 😊 treat it as float
    sum();

    return 0;
}