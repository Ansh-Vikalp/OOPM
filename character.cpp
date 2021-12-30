#include <iostream>
using namespace std;

void xstrcpy(char *t, char *s)
{
    while (*s != '\0')
    {
        *t = *s;
        t++;
        s++;
    }
    *t = '\0';
}

int main()
{
    char str1[] = "Nagpur";
    char str2[10];
    xstrcpy(str2, str1);
    cout << str2;

    return 0;
}