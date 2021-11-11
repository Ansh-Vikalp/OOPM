#include<iostream>
using namespace std;


/*                                   😉Armstrong number
    ✔This program is only valid for check Armstrong number upto 3 digit number

*/



int main(){
    int a,b,c,n,temp,ans ;


    cout<<"Enter a 3 digit number:"<<endl;
    cin>>n;
    temp=n;
    a=n%10;
    n=n/10;
    b=n%10;
    c=n/10;
    //cout<<a<<b<<c<<endl;
    ans=(a*a*a+b*b*b+n*n*n);
    if (temp==ans)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not Armstrong"<<endl;
    }
    return 0;
}