#include <iostream>
using namespace std;

int main()
{

    // char *p="Hello"; 🥑This will not work aS PER NEW ISO standard we always have to mention
    //   // *p='M';      our string("Hello") as constant
    //   p="Bye";
    //  cout<<p

    const char *p = "Hello";
    // *p = 'M';
    p = "Bye";
    cout << p;

    cout << endl
         << endl;

    char const *q = "Hello";
    // *p = 'M';
    q = "Bye";
    cout << q;

    cout << endl
         << endl;

    // char *const r = "Hello"; 🥑This will also not work although we made our pointer constant but we require to
    // // *r = 'M';              treat our string as always constant by writing const char* of char* const
    // // r = "Bye";
    // cout << r;

    const char *const r = "Hello";
    // *r = 'M';
    // r = "Bye";
    cout << r;

    return 0;
}