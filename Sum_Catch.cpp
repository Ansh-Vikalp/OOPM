#include<iostream>
using namespace std;

/*      😊👉In this experiment we will try to undrestand use of triangle catch blocks as a function call  
So, let's begin:-
*/
void tri(int a, int b, int c){
   
    int sum= a+b;
    
    if (sum<c || sum<c)
    {
     throw sum;
    }
    else
    {
        cout<<"Traingle can be constructed: "<<endl;
    }
}

int main(){

    int a;
    int b;
    int c;
    cout<<"Enter three sides of triangle: "<<endl;
    cin>>a>>b>>c;
    
    try
    {
        tri(a,b,c);
    }
    catch(int e)
    {
      cout<<"Please enter some valid sides, triangle can't be constructed"<<endl;  
    }
    
    return 0;
}