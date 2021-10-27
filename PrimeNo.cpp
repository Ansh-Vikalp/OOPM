#include<iostream>
using namespace std;




int main(){
    int p=1;
    int n;
    cout<<"Enter any number "<<endl;
    cin>>n;
    for (int i = 2; i <n; i++)
    {
       if (n%i==0)
       {
           p=0;
       }
       
    }
    if (p==1)
    {
        cout<<"Your number is PRIME"<<endl;
    }
    else{
        cout<<"Your number is not PRIME"<<endl;
    }
    return 0;
}