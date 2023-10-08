//For an integer N find the number of trailing zeroes in N!.

#include <iostream>
using namespace std;

 int trailingZeroes(int N)
    {
        int count = 0;
        
        while(N >= 5)
        {
            count += N / 5;
            N /= 5;
        }
        
        return count;
         
    }


int main(){

    int num1;
    cout<<"Enter the number: ";
    cin>>num1;

    cout<<trailingZeroes(num1);


}