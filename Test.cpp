#include <iostream>
using namespace std;
int sizeU;

void display(int *p)
{
    cout << "Array is: " << endl;
    for (int i = 0; i < ::sizeU; i++)
    {
        cout << p[i] << " ";
    }
}

void insert(int arr[])
{
    int a;
    int pos;

    cout << "Enter the element wanted to insert: " << endl;
    cin >> a;
    cout << "Enter position" << endl;
    cin >> pos;
    ::sizeU++;

    for (int i = ::sizeU - 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = a;
}

int main()
{
    int a;
    cout << "Enter size: " << endl;
    cin >> ::sizeU;
    int arr[::sizeU];
    cout << "Enter a array: " << endl;
    for (int i = 0; i < ::sizeU; i++)
    {
        cin >> arr[i];
    }
    display(arr);

    cout << endl
         << endl;

    insert(arr);
    display(arr);
    return 0;
}