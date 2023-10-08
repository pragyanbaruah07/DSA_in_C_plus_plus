// Given a positive integer N, print count of set bits in it. 


#include <iostream>
using namespace std;

int main()
{
    
     
    int N,ans=0, rem, mul=1, count=0;
    cout<<"Enter the Number :";
    cin>>N;
        
        while(N)
        {
            rem = N % 2;
            if (rem == 1)
            count++;
            N /= 2;
            ans += rem * mul;
            mul *= 2;
        }
        
        cout<<count;
}