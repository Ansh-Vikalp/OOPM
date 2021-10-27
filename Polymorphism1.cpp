
/*   
                                        <Polymorphism>

    👩‍💻 Ploy means many and morphism means forms. so, polymorphiusm can be defined as a structure which can take different forms.
    There are two types of polymorphism these are -
    👉 Compile time Polymorphism also called as Static binding or Early Binding.--> Here action of the propgram is determined at the compilation time 

    👉Runtime Polymorphism also called as Dynamic Binding or Late Binding. --> Here action of the program is determined at Runtime

                    _____________________________________________________________________
                    |__________________Compile Time Polymorphism________________________|
                    |            🤜Acieved By:                                          |
                    |                   1) Function Overloading                         |
                    |                   2) Operator Overloading                         |
                    |                                                                   |
                    |                                                                   |





                    _____________________________________________________________________
                    |__________________Run Time Polymorphism_____________________________
                    |            🤜Acieved By:                                         |
                    |                   1) Virtual Function                             |
                    |                                                                   |
                    |                                                                   |
                    |                                                                   |




    Here we will first study Function Overloading
*/

/* 
                                    Function Overloading
    If multiple function has same name but either diffrent in no of paramneter(arguments) or type of parameter(argument) then it is called as function overlolading.

*/




#include<iostream>
using namespace std;

void Show ()// Zero Argument
{
    cout<<"zero argument";
}

void Show (int p)//one argument
{
    cout<<"\none argument "<<p;
}

void Show(int p, int q)//Two argument
{
    cout<<"\nTwo argument "<<p<<","<<q;
}

void Show (char ch)//Type changed argument
{
    cout<<"\nType changed argument "<<ch;
}


int main(){

    Show();
    Show(5);
    Show(5,6);
    Show('A');
    
    return 0;
}