#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    char product[80];
    cout << "Enter a product: " << endl;
    cin >> product;

    int len = strlen(product);

    fstream file;                                // Input and output stream
    file.open("Single.txt", ios::in | ios::out); // simultaneous opening
    for (int i = 0; i < len; i++)
    {
        file.put(product[i]); // Put data chacter by chracter
    }
    // simultaneous opening
    file.seekg(0); // set output pointer to begin
    char ch;
    cout << "OUTPUT: " << endl;
    while (file)
    {
        file.get(ch); // reads data character by character
        cout << ch;
    }

    return 0;
}