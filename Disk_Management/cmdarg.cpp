#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    int numbers[9] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    if (argc != 3)
    {
        cout << "argc= " << argc << endl;
        cout << "Argument is not valid" << endl;
        exit(1);
    }
    ofstream out1, out2;
    out1.open(argv[1]);
    if (out1.fail())
    {
        cout << "Could not open the file " << argv[1] << endl;
    }
    out1.open(argv[2]);
    if (out2.fail())
    {
        cout << "Could not open the file " << argv[2] << endl;
    }

    for (int i = 0; i < 9; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            out1 << numbers[i] << " ";
        }
        else
        {
            out2 << numbers[i] << " ";
        }
    }

    out1.close();
    out2.close();

    ifstream in;
    char ch[22];
    for (int i = 1; i < argc; i++)
    {
        in.open(argv[i]);
        cout << "Content of: " << argv[i] << endl;
        do
        {
            in.getline(ch, 22);
            cout << ch;
        } while (in);
        cout << "\n\n";
        in.close();
    }

    return 0;
}