//Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. 
//(use Continue here).

#include <iostream>
using namespace std;

int main(){

    int n,i=1;
    cout<<"Enter the number: ";
    cin>>n;

    while(i <= n)
    {
        if((i % 3 == 0) && (i % 5 == 0))
        {
            i++;
            continue;    
        }
        cout<<i<<" ";
        i++;
    }

    
}