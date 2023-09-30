// Take three numbers a,b,c from the user, print yes if a is either greater than b or c. 
// Otherwise print NO.


#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3;

    cout<<"Enter first value: ";
    cin>>num1;
    cout<<"Enter second value: ";
    cin>>num2;
    cout<<"Enter third value: ";
    cin>>num3;

    if((num1 > num2) || (num1 > num3))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;

}