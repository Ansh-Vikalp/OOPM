#include <iostream>
using namespace std;

class Employee
{
    string name;

public:
    Employee(string n)
    {
        name = n;
    }

    virtual void Display()
    {
        cout << "Name: " << name << endl;
    }
};

class Manager : public Employee
{
    double commission;

public:
    // Manager(double comm)
    // {
    //     commission=comm;
    // }

    /* writting this code of manager constructor will give an error as there is no default constructor of Base class
    and whenever Child class obj is made then firstly base class is provided memory which require auto calling of
    base class constructor but compiler Bhaiya see ki base class me koi default(Khali) constructor defined nahi hai
    to error aayega even ek constuctor Employeee(string n) hai magar ye constructor to ek argument le raha hai to ise to
    compiler to call rahne se raha but agar hum log ek default blank constructor base class mai dal de to ye error khatam ho
    gayega

    Or or or RUKO JARA SABRA KARO

    Agar hum default constructor nahi dalna chahte to  Child class ka Constructor ke sath sath Base class ka Constructor
    ka value INITIALLIZE kar de tub bhi ye kam kar gayega aur error khtam ho gayega as we have done in below mentioned code

    */

    Manager(string nam, double comm) : Employee(nam)
    {
        commission = comm;
    }
    virtual void Display()
    {
        cout << "Commission: " << commission << endl;
    }
};

int main()
{
    Employee e1("Ram Babu Chaurasia");
    Manager m1("Nikesh Tiwari", 2000);

    Employee *Bap;
    Employee *Maa;

    Manager *Baccha;

    Bap = &e1;
    Maa = &m1;

    // This is only for testing:)
    //  Bap->Display();
    //  Maa->Display();

    Baccha = dynamic_cast<Manager *>(Bap);
    cout << "Baccha " << Baccha << endl; // Gives NULL
    if (Baccha)
    {
        Baccha->Display(); // This gives error❌📛❌
    }
    else
    {
        cout << "Baccha contains NULL" << endl;
    }

    Baccha = dynamic_cast<Manager *>(Maa);
    cout << "Baccha " << Baccha << endl; // Gives any value other than NULL
    if (Baccha)
    {
        Baccha->Display(); // This will work✔✔✔
    }
    else
    {
        cout << "Baccha contains NULL" << endl;
    }

    return 0;
}