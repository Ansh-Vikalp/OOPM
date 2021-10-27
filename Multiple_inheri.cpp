#include<iostream>
using namespace std;

class ab {
    public:
    void show(){
        cout<<"class ab function\n";
    }
};

class cd{
    public:
        void out(){
            cout<<"class cd function\n";
        }
};

class final: public ab, public cd {
    public:
        void display(){
            cout<<"final class function\n";
        }
};


int main(){
    final obj;
    obj.display();
    obj.show();
    obj.out();
    
    return 0;
}