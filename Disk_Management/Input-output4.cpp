#include <iostream>
#include <fstream>
using namespace std;

/*endl takes 2 byte of storage as the ascii code is '\0' which actually comparises of two characters
tellg() does not report the size of the file, nor the offset from the beginning in bytes.
It reports a token value that can be arbitar any thing ramdom  which can later be used to seek to the same place(as the value is unique),
and nothing more.
(It’s not even guaranteed that you can convert the type to an integral type)



*/

int main()
{

    ofstream outf;
    outf.open("Moving_Pointers.txt", ios::app);
    outf << "Ram" << endl;
    outf << "Sita" << endl;
    outf << "Lakshman" << endl;
    int count = outf.tellp();
    cout << count;
    outf.close();

    return 0;
}