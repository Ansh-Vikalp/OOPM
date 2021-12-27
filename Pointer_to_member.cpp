#include <iostream>
using namespace std;

struct Sample
{
    int a;
    float b;
};

int main()
{
    int Sample ::*p = &Sample::a;   //🤩This pointer(*p) is of Sample and we passed address of it's int element
    float Sample ::*q = &Sample::b; //🤩This pointer(*q) is of Sample and we passed address of it's float element

    Sample so = {10, 11.22};
    cout << "Integer: " << so.*p << " Float: " << so.b << endl; // Here we used .* operator to call through object

    Sample *ptr = &so;
    cout << "Integer: " << ptr->*p << " Float: " << ptr->*q << endl; // Here we used ->* operator to call through pointer

    so.*p = 89;      //😎Here we changed value by reference of struct Object
    ptr->*q = 33.11; //😎While in it we changed value by reference of Pointers
    cout << "New value of elements: " << endl;
    cout << "Integer: " << so.*p << " Float: " << ptr->*q << endl;

    return 0;
}