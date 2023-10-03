// Write a program to convert decimal numbers to binary numbers using a for loop.

#include <iostream>
using namespace std;

int main(){

    int num, ans = 0, rem, mul = 1;

    cout<<"Enter the number : ";
    cin>>num;

    for(int i = num; i > 0;)
    {
        rem = i % 2;
        i = i / 2;
        ans += rem * mul;
        mul *= 10;
    }

    cout<<"The converted number is : "<<ans;
}