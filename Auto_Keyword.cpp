#include <iostream>
using namespace std;

int main()
{

    /*                     π auto and delctype KEYWORDS in C++
    π auto and decltype are two keywords that can automatically jude the type of data assinged to it.
    π we need not to give their data type explicitly on using them
    π The main difference in use of auto and decltype is that while auto always need to initialised by value
    π But decltype need not to be initialised it takes ref. to already declared some variable and use its type to generate itself with same type
    π See below example and try to understand.
    */

    int i = 7;
    auto j = 8;
    auto k = i;
    cout << i << " " << j << " " << k << endl;
    char ch;              //π»Here decltype takes ref of ch data type to generate type of l as char
    decltype(ch) l = 'Y'; // Here we had initialised l by 'Y' but is not necessary we had only done it in order to display value of l
    cout << l << endl;
    return 0;
}