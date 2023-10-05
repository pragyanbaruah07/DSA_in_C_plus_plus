// Reverse a number n using Function, Constraints: -5000<=n<=5000


#include <iostream>
using namespace std;


int reverse(int n)
{
    int ans=0, rem;
    bool isNegative = false;

    if(n < 0)
    {
        isNegative =true;
        n = abs(n);
    }

    while(n)
    {
        rem =  n % 10;
        n /= 10;
        ans = ans * 10 + rem;
    }

    if(isNegative)
    {
        ans = -ans;
    }
     
     return ans;
}


int main()
{
    int num;

    cout<<"Enter the number: ";
    cin>>num;

    cout<<"The reversed number is: "<<reverse(num);
}