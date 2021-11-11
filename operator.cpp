#include<iostream>
using namespace std;

class abc{
    public:
        void operator ++ (){
            cout<<"++ operator overloading"<<endl;
        } 

        void operator -- (){
            cout<<"-- operator overloading"<<endl;
        } 
};


int main(){
    abc obj;
   ++obj;
   --obj;
    return 0;
}