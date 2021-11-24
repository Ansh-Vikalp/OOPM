#include <iostream>
#include <math.h>
using namespace std;



/*                                  😎Armstrong Number 2 
    This program is to check wheather given n-digit no. is Armstrong or not 

    0,1,153, 370, 371, 407, 1634, 8208, 9474

*/

int main()
{
    int n, rem, sum = 0, temp1, temp2, count = 0;
    cout << "Enter any number: " << endl;
    cin >> n;

    temp1 = n;
    temp2 = n;

    while (n != 0)
    {
        count = count + 1;
        n = n / 10;
    }

    while (temp1 > 0)
    {
        rem = temp1 % 10;
        sum = sum + pow(rem, count);
        temp1 = temp1 / 10;
    }
    if (temp2 == sum)
        cout << "Armstrong  number " << endl;
    else
        cout << "Not armstrong number" << endl;
    return 0;
}