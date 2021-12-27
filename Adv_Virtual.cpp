#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void speed()
    {
        cout << "In speed of vehicle" << endl;
    }

    virtual void maintainence()
    {
        cout << "In Maintainance of Vehicle" << endl;
    }

    virtual void value()
    {
        cout << "In Value of  Vehicle" << endl;
    }
};

class Four_Wheeeler : public Vehicle
{
public:
    void speed()
    {
        cout << "In speed of Four Wheeler" << endl;
    }

    void maintainence()
    {
        cout << "In Maintainance of Four Wheeler" << endl;
    }
};

class Two_Wheeler : public Vehicle
{
public:
    void speed()
    {
        cout << "In speed of Two Wheeler" << endl;
    }

    void maintainence()
    {
        cout << "In Maintainance of Two Wheeler" << endl;
    }

    void value()
    {
        cout << "In Value of  Two Wheeler" << endl;
    }
};

class Air_bone : public Vehicle
{

public:
    void value()
    {
        cout << "In value of Airbone" << endl;
    }
};

int main()
{

    Vehicle *ptr1;
    Vehicle v;
    ptr1 = &v;

    ptr1->speed();
    ptr1->maintainence();
    ptr1->value();
    cout << endl
         << endl;

    Vehicle *ptr2, *ptr3, *ptr4;
    Four_Wheeeler maruti;
    Two_Wheeler pulser;
    Air_bone Jetblack;

    ptr2 = &maruti;
    ptr3 = &pulser;
    ptr4 = &Jetblack;

    ptr2->speed();
    ptr2->maintainence();
    ptr2->value();

    cout << endl
         << endl;

    ptr3->speed();
    ptr3->maintainence();
    ptr3->value();

    cout << endl
         << endl;

        ptr4->speed();
    ptr4->maintainence();
    ptr4->value();

    return 0;
}