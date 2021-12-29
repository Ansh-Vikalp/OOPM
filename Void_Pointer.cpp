#include <iostream>
using namespace std;

int main()
{
    char *s = "Hellow";
    void *p = s; //✅ Assigning address of char* to pointer of void type is allowed
                 // s=p;❌This statement is not valid we can't assign void pointer to any specific pointer Unless we typecat into it
                 // EX- s=(char*)p; This will work now;

    // const char *s = "Hellow";
    //  const void *p = s;
    return 0;
}