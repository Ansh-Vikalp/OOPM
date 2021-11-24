#include <iostream>
using namespace std;
/*                          Exception Handeling
Here we use try and catch block with throw keyword;
Syntax:-

try
{

    throw para;
}

    catch(para)
    {

    }


*/

int main()
{
    int i;
    cout<<"Enter a value: "<<endl;

    cin>>i;

    try
    {
        char e;
        e='s';
        if (i==3)
        {
            throw e;
        }
        
    }
    catch(char d)
    {
        cout<<"Please enter a valid input"<<endl;
    }
    cout<<"Success"<<endl;

    return 0;
}