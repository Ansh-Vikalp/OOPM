#include <iostream>
using namespace std;

void display(char *p)
{
    // *(p + 3) = 'h'; //This will compile but gives an unexpected error in result
    cout << p;
}

int main()
{
    const char *ptr = "What's up!";
    display(const_cast<char *>(ptr));
    return 0;
}