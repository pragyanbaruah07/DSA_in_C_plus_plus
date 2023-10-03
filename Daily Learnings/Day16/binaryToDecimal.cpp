// Write a program to convert binary numbers to decimal numbers using a for loop.

#include <iostream>
using namespace std;

int main(){

    int num, ans = 0, rem, mul = 1;

    cout<<"Enter the number : ";
    cin>>num;

    for(int i = num; i > 0;)
    {
        rem = i % 10;
        i = i / 10;
        ans += rem * mul;
        mul *= 2;
    }

    cout<<"THe converted number is : "<<ans;
}