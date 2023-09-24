// Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user

#include <iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter a number: ";
    cin>>num;

    for (int c = 1; c <= num; c++)
    {
        if (c % 4 == 0)
        {
            cout<<" "<<c;
        }
    }
}