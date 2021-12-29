#include <iostream>
using namespace std;

union money
{
    int rice;
    char ch;
    float pound;
};
/*                                      🤢General Points

Note here how variables of union money is created by simply money m.unlike C C++ doesn't need keyword
like struct, union, enum while defining the variable e1.However if we want we can also define variable like
union money m instead of  money m.

😵NOTE:-
1)Union is user defined data type
2)It is also collection of heterogeneous data elements
3)The size of Union is the size of it's embedded element which takes maximum value.
EX-
    int rice--> 4 bytes
    char ch--> 1 byte
    float pound-->4 bytes
    -----------------------------------------------------------
    size provided by union= maxof(int, char, float)= 4 bytes
    -----------------------------------------------------------
4)Just like structure we can also change it's type defination as typedef <<name>> and use this name whenever necessary in our code
5) C++ permits us to use anonymous union.An autonoumous union does not have a union name(tag), and it's elements can be accessed directely withot using any union variable.
    EX-
        struct employee
        {
            char name[20];
            union   ⋘ this is anonymous union
            {
                int emptype;
                char rating[10];
            }
        }

        int main()
        {
            struct employee e;
            e.name="Ansh";
            e.emptype=5;// Note here we directely accessed emptype without two refrences
            cout<<e.name<<endl;
            cout<<e.emptype<<endl;

            return 0;
        }



6)Anonymous union is useful when it is nested inside a structure as it's one of element.
    🤔HOW?
        when we nest anonymous union the we does not require to take ref of two dot(.) as
        struct employee e;
        union type t;
        e.t.good =5;//as a got rating assume👇🏾
            struct employee {
                char name[20];
                    union type
                    {
                        int good;
                        int meadium;
                        int bad;
                    }
            }

*/

int main()
{

    union money m;
    m.rice = 1;
    cout << "Rice in kg= " << m.rice << endl;
    m.pound = 7.8; // Now rice is get overridden by pound
    /*
    This will give us a garbage value as of now we currently using pound but in below we are try to ascessing value of rice quantily
    which remains deactive so it gives us some garbage value
    but, by same if we try to ascess value of float pound below it give us correct answer
    as current active condition is for float data type.
    */
    cout << "Rice in kg= " << m.rice << endl;

    return 0;
}