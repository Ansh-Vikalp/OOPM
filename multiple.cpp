#include<iostream>
using namespace std;
class Ayush{
        public:
        void show(){
            cout<< "Ayush Kumar is here" << endl;
        }

};

class Ansh{
    public:
        void show(int a)
        {
            cout<< "Ansh is Here";
        }
};

class Students : public Ayush, public Ansh{
    public:
        // Students(){
        //     cout<< "Students is created";
        // }
        void show_student(){
        //  Ansh :: show(4);
         Ayush :: show();
        }
        //  Ayush :: show();
};


int main(){
    Students obj;
    obj.show_student();

    return 0;
}