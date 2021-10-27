#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    friend complex Sumcomplex(complex, complex);
public:
    void setData(int p, int q){
        a=p;
        b= q;
    }
    void PrintData(){
        cout<<"Your complex number is: "<<a <<" + "<<b<<"i"<<endl;
    }
};

complex Sumcomplex(complex p, complex q){
    complex r;
    r.setData(p.a+q.a, p.b+q.b);

    return r;
}

int main(){
    complex ob1, ob2, res;
    ob1.setData(3,4);
    ob1.PrintData();
    ob2.setData(1,2);
    ob2.PrintData();
    res = Sumcomplex(ob1, ob2);
    res.PrintData();

    
    return 0;
}