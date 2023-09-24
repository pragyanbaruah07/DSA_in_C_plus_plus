// Print all Odd numbers from 1 to n, take n as an input from the user.

#include <iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter a number: ";
    cin>>num;

    for (int c = 1; c <= num; c++)
    {
        if (c % 2 == 1)
        {
            cout<<" "<<c;
        }
    }
}