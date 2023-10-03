//Take a number n from the user and print all the even numbers between 1 and n(inclusive). 
//Do this using while and do while loop separately.

//While Loop

#include <iostream>
using namespace std;

int main(){

    int n,i=11;
    cout<<"Enter the number: ";
    cin>>n;

    while(i <= n)
    {
        if(i % 2 == 0)
        {
        cout<<i<<" ";
        }
        i++;
    }

}