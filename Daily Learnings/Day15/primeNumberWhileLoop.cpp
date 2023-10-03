//Give a number n, find if it is prime or not, use a while loop and break here to solve it. 

#include <iostream>
using namespace std;

int main(){

    int n, i = 2;
    bool isPrime = false;

    cout<<"Enter the number: ";
    cin>>n;
    
    while(i < n)
    {
        if(n % i == 0)
        {   
            isPrime = true;
            break;
            i++;
        }
        i++;
    }

    if(isPrime != 0)
    cout<<"It is not a Prime Number.";
    
    else   
    cout<<"It is a Prime Number.";
    

    
}