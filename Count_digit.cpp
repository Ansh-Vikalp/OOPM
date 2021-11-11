#include<iostream>
using namespace std;

/*                  ||||||||||Program to track count of Number of digits||||||||||||

👩‍💻This program will count the present number of digits in a given Number
👉Here we had maken a counter variable as count which will track no of digits and update after each iteration.
👉n=n/10 will generate our no of digits.


*/


int main(){
    int count;
    count=0;
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    while (n!=0)
    {
        count = count +1;
        n=n/10;
        
    }
    cout<<"NO. of digits are:"<<count<<endl;
    return 0;
}