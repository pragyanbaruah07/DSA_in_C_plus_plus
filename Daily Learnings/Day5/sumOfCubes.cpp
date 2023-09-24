//Print Sum of cube of first n natural number.


#include <iostream>
using namespace std;

int main(){

    int add = 0, n, i; 

    cout<<"Enter the number: ";
    cin>> n;

    for(i = 1; i <= n ; i++)
    {
        add += i*i*i;
    }

    cout<<"Sum of cubes of first given N natural number is: "<<add;
}