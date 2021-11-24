#include<iostream>
#include<string.h>
using namespace std;




int main(){
    char a[50];
    char b[50];

    cout<<"Enter any string"<<endl;
    cin>>a;
    strcpy(b,a);
    strrev(a);
    if (a==b)
    {
        cout<<"Palindrome"<<endl;
    }
    else{

        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}