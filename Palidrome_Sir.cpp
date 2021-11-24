#include<iostream>
#include<string.h>
using namespace std;

/*                                  😀   This is palidrome progrm made by sir

    Given below is the Palidrome program for reversing a string and then comparing whether they are equal or not if they are--
    🎶 if they are equal the for every vale of character in string the diffrence of ASCII code for a-b will be 0 and hence, if i==0 then our string is palidrome
    🎶 else if the diffrence is not eual then it will return any integer besides 0 then it will not be palidrome;
*/


int main(){
    
    int i;
    char a[50];
    char b[50];

    cout<<"Enter any string: "<<endl;
    cin>>a;
    strcpy(b,a);
    strrev(a);
    i=strcmp(a,b);

    if (i==0)
    {
        cout<<"Palidrome"<<endl;
    }
    
    else{
        cout<<"Not Palidrome"<<endl;
    }


    return 0;
}