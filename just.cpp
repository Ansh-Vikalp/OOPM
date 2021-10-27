#include<iostream>
using namespace std;
class abc{
    private:
    int a=7;
    public:
    int*p = &a;
};



int main(){
    abc ob;
  int*q = ob.p;
  cout<<**q;
    
    return 0;
}