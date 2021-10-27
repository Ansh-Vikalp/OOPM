#include <iostream>
using namespace std;


//Abstract Class
class A
{ 
public:
    virtual void show() = 0; //Pure virtual function
};

/* Note 👇✍

1) Abstract class is a speacial class which contains atlest one pure Virtual function
2) Thre is a diffrence between virtyual function and pure virtual function as---
            virtual void show()👉 A virtual Function
            virtual void show()=0;👉A Pure virtal function
3) As in abstract class we only declare our function and make it =0; so it does not contain any defination part so there is no meaning of making objects of abstract class
4) We define our function of abstract class in another seprate Sub class by use of Single Inheritance  
        So it can be said that in abstract we only declare a function while it's actual implementaion is done in sepreately
5) We make abstract class for our future refrence in case required use in anthor class
6) The one more advantage of making of Abstract classd is that it does not reserves Memory space until function inside it is being defind.       
😉😎
*/

class B : public A
{
public:
    void show()
    { //Defining virtual function in it's sub class
        cout << "Show Function" << endl;
    }
};
int main()
{
    B obj;
    obj.show();

    return 0;
}