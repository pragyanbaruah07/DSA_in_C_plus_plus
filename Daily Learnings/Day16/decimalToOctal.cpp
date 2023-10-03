// Write a program to convert decimal numbers to Octal numbers.


#include <iostream>
using namespace std;

int main(){

    int num, ans = 0, rem, mul = 1;

    cout<<"Enter the number : ";
    cin>>num;

    for(int i = num; i > 0;)
    {
        rem = i % 8;
        i = i / 8;
        ans += rem * mul;
        mul *= 10;
    }

    cout<<"The converted number is : "<<ans;
}