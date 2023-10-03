//Find the factorial of a number n using a while loop and do a while loop.

//While Loop

#include <iostream>
using namespace std;

int main(){

    int n,i=1, mul=1;
    cout<<"Enter the number: ";
    cin>>n;

    while(i <= n)
    {
        mul *= i;
        i++;
    }


    cout<<"The factorial of the number is: "<<mul;
}