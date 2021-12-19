#include <iostream>
using namespace std;
//😎 Defining our own namespace
/* For more delails see file Advance_concepts.cpp*/
namespace Test
{
    int m = 0;
    int x = 4;

    void sum()
    {
        cout << m + x << endl;
    }

    namespace Sub
    {

        int k = 7;

    }

}

namespace
{

    int g = 8;

}