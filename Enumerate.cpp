#include <iostream>
using namespace std;

/*                                                          🤢General Points
Note here how variables of enum fruits is created by simply fruits f.unlike C C++ doesn't need keyword
like struct, union, enum while defining the variable f.However if we want we can also define variable like
enum fruits f instead of  fruits f.

😵NOTE:-
1)enum is user defined data type
2)The hindi of enum means (ki ganta) which simple means counting.
3)It is also collection of variables which are assigned with some suitable indexing staring from 0
4)The size of enum is the no of elements in it.
5)Just like structure we can also change it's type defination as typedef <<name>> and use this name whenever necessary in our code
6) C++ permits us to use anonymous enum.An autonoumous enum does not have a enum name(tag), and it's elements can be accessed directely withot using any enum variable.
7)Anonymous union is useful when it is nested inside a structure as it's one of element.
    (See previous union example for more details)
8) enum are useful in program to increase visiblity and meaningness of code but the logic(value) remains same.
*/

int main()
{
    enum fruits
    {
        mango,    //-->0
        apple,    //-->1
        banana,   //-->2
        orange,   //-->3
        grapes,   //-->4
        guava,    //-->5
        litchi,   //-->6
        pineapple //-->7
    };

    // array of increasing order of favorite fruits
    int arr[] = {mango, banana, orange, litchi, grapes, apple, guava, pineapple};

    for (int i = 0; i < 9; i++)
    {
        switch (arr[i])
        {
        case 0:
            cout << "mango" << endl;
            break;
        case 1:
            cout << "apple" << endl;
            break;
        case 2:
            cout << "banana" << endl;
            break;
        case 3:
            cout << "orange" << endl;
            break;
        case 4:
            cout << "grapes" << endl;
            break;
        case 5:
            cout << "guava" << endl;
            break;
        case 6:
            cout << "litchi" << endl;
            break;
        case 7:
            cout << "pineapple" << endl;
            break;
        default:
            break;
        }
    }

    fruits f = apple; // this will assign integer to variable of enum.
    cout << f << endl;

    return 0;
}