#include<iostream>
using namespace std;


void integer(){
    int a;
    cout<<"Enter value of inta: "<<endl;
    cin>>a;
    if (a==0)
    {
        throw a;
    }
    else{
        cout<<a<<endl;
    }

}


void character(){
    char a;
    cout<<"Enter a char: "<<endl;
    cin>>a;
    if (a=='h')
    {
        throw a;
    }
    else
    {
        cout<<a<<endl;
    }

}

void floating(){
    float a;
    cout<<"Enter value of floata: "<<endl;
    cin>>a;
    if (a==float(7.9))//Typecasting as by default it understand it as double value
    {
        throw a;
    }
    else{
        cout<<a<<endl;
    }

}


int main(){

    try
    {
        
        integer();
        character();
        floating();
    
    }
    
    
    
    catch(int r)
    {
        cout<<"Error "<<r<<endl;
    }
    catch(float r)
    {
        cout<<"Error "<<r<<endl;
    }
    catch(char r)
    {
        cout<<"Error "<<r<<endl;
    }
    return 0;
}