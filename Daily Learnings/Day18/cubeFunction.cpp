// Find the cube of a number using Function. 

#include <iostream>
using namespace std;


void cube(int n)
{
    cout<<"Cube of the given number is: "<<n*n*n;
}


int main()
{
    int num;

    cout<<"Enter the number: ";
    cin>>num;

    cube(num);
}