// Write a program to convert Octal numbers to binary numbers

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
        mul *= 8;
    }

    int binary=0, mul2 =1;
    while(ans)
    {
        rem = ans % 2;
        ans /= 2;
        binary += rem * mul2;
        mul2 *= 10;
    }
    cout<<"The converted number is : "<<binary;
}