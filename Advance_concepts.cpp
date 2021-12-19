//#include <iostream>
#include "Here.cpp" // We included the file which contains our namespace defination
// using namespace std;

/* 📌Note Here we skipped including <iostream> and using namespace std;
          as the file which had been incuded "sss.cpp" already contains these header declarion


*/

int main()
{

     using namespace Test; //👉 Here we are using directive meathod(THE BEST!)
     /*                                           😎
          1) The above can also be done by using declaration meathod as:-
               using namespace_name:: Data_element
               Ex- using Test::m;
          2) But the actual problem is that we can use m freely without quantifying it repeatedly but needs to quantify x alwas

     */
     cout << "The value of m from namespace 1 is: " << m << endl;
     cout << "The value of x from namespace 1 is: " << x << endl;
     cout << endl
          << endl;
     cout << "Sum function is called from namespace1: " << endl;
     sum();
     cout << "The value of k from nested namespace 2 is: " << Test::Sub::k << endl // Here k is called to be fully qualified
          << endl;
     cout << "The value of g from unamed namespace: " << g << endl; // In unamed namespace all data members occupy global position

     return 0;
}