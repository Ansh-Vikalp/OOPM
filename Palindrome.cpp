#include<bits/stdc++.h>
using namespace std;


string Palindrome(string s){
    string p= s;
    reverse(p.begin(), p.end());

    if (s==p)
    {
        return "Yes";
    }
    
    else{
        return "No";
    }
}

int main(){
    string value;
    cout<<"Enter any string: "<<endl;
    cin>>value;
    cout<< Palindrome(value);
    
    return 0;
}