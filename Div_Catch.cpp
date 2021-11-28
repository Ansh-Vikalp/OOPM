#include<iostream>
using namespace std;

/*      😊👉In this experiment we will try to undrestand use of try and catch block in real problems as a function call  
So, let's begin:-
*/
void div(float a, float b){
   
    float c= a/b;
    
    if (b==0)
    {
     throw b;
    }
    else
    {
        cout<<"The division of two numbers is: "<<c<<endl;
    }
}

int main(){

    float a;
    float b;
    cout<<"Enter values of a and b "<<endl;
    cin>>a>>b;
    
    try
    {
        div(a,b);
    }
    catch(float e)
    {
      cout<<"Please enter some valid quantity"<<endl;  
    }
    
    return 0;
}