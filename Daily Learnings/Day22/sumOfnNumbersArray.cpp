// Take 20 elements from user input and find its sum with the help of an array.

#include <iostream>
using namespace std;

int main(){

    int arrNum[20],i, arrSum = 0;

    cout<<"Enter the values: ";

    for(i=0; i<20; i++)
    {
        cin>>arrNum[i];

        arrSum += arrNum[i];

    }

    cout<<"The sum of all the values are: "<<arrSum;

    return 0;
}