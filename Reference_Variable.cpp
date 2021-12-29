#include <iostream>
using namespace std;
//                                                      🥇Reference Variable
int main()
{

    int i = 77;
    int &j = i; //🎈Here j is said to be refering to i and stores address of variable a as it's own address

    cout << "Value of i= " << i << " Value of j= " << j << endl;
    i = 33;
    cout << "Value of i= " << i << " Value of j= " << j << endl;
    j = 10;
    cout << "Value of i= " << i << " Value of j= " << j << endl;
    i++;
    cout << "Value of i= " << i << " Value of j= " << j << endl;
    j++;
    cout << "Value of i= " << i << " Value of j= " << j << endl
         << endl;
    cout << "Address of i= " << &i << " Address of j= " << &j << endl;

    return 0;
}

/*🍒 Also note in VS code just drag and dropf open file in tab bar to split code and see and work simultaneously on two diffrent files
    Try to drop at diffrent position so to horizontal split as well as vertical */