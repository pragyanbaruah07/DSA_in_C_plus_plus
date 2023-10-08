// You are given two numbers A and B. The task is to count the number of bits needed to be flipped 
// to convert A to B.

#include <iostream>
using namespace std;

int main()
{

    int a, b,ans_a=0, ans_b=0, rem_a, rem_b, mul_a=1, mul_b=1, count=0;
    cout<<"Enter the Number :";
    cin>>a;
    cout<<"Enter the Number :";
    cin>>b;
        
        while(a || b)
        {
            rem_a = a % 2;
            rem_b = b % 2;
            if(rem_a != rem_b)
            count++;
            a /= 2;
            b /= 2;
            ans_a += rem_a * mul_a;
            mul_a *= 2;
            ans_b += rem_b * mul_b;
            mul_b *= 2;
        }
        
        cout<<count;



}