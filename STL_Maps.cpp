#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef map<string, long long int> phoneMap; // Changing the defination of such long keyword

/*                                      😜General discussion about Map STL

    👉A map is a sequence of cobination of (keys,value) pair where, a single value is associated with each unique keys.
    👉A map is commomly called as an associative array, as it associates every key to every other value
    👉The key is specified by subscript operator[]
    Ex- map_object[key]=value;
        employ["Rahul"]=9334037445;

    Diagram:=

        Key1---------->Value1
        Key2----------->Value2
        Key3----------->Value3

*/

int main()
{
    string name;
    long long int number;

    phoneMap employ; // this refers to map<string,long long int> employ;
    cout << "Enter three sets of name, phone_number : " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> name;
        cin >> number;
        employ[name] = number;
    }

    // Adding extra element manually
    employ["Rambabu"] = 8976564390;

    // Inserting bose
    // employ.insert(pair<string,long int,int>("Bose", 7890673455, 90000));
    int n = employ.size();
    cout << "\nSize of map: " << n << endl;
    cout << "List of employee details: " << endl;
    cout << "Name     Number " << endl;
    phoneMap ::iterator itr;

    for (itr = employ.begin(); itr != employ.end(); ++itr)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }

    cout << endl;
    cout << "Enter Name: " << endl; // Get name
    cin >> name;
    number = employ[name]; // Find number

    cout << "Number: " << number << endl;

    return 0;
}