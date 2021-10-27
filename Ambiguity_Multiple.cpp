#include<iostream>
using namespace std;

class ab{
    public:
    void show(){
        cout<<"Good morning!\n";
    }
};

class cd{
    public:
    void show(){
        cout<<"Hellow!\n";
    }
};

class final: public ab, public cd{
    public:
    void raftar(){
        cout<<"raftar function\n";
    }
    /*void show(){
        cout<<"Nice\n";
    }*/
};


int main(){

    final obj;
   // obj.show();
   obj.raftar();
    
    return 0;
}