#include<iostream>
using namespace std;

class ab{
    public:
    void show(){
        cout<<"class ab function\n";
    }
};

class cd: public ab{
    public:
    void out(){
        cout<<"class cd function\n";
    }
};

class final : public cd{
    public:
    void display(){
        cout<<"final class function\n";
    }
};
int main(){
    final obj;
    obj.display();
    obj.out();
    obj.show();
    
    return 0;
}