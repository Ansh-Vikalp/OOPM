#include<iostream>
using namespace std;




int main(){
    char name [3][8];
    cout<<"Enter any name "<<endl;
    for (int j = 0; j < 3; j++)
    { 
       cin>> name[j];
    }
    cout<<endl<<endl;
    cout<<"OUTPUT: "<<endl;
    for (int i = 0; i <3; i++)
    {
        cout<< name[i]<<endl;
    }
    
    return 0;
}