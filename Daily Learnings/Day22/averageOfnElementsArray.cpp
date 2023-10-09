// Calculate the average of elements in an array of size 18.

#include <iostream>
using namespace std;

int main(){

    int arrNum[18],i, arrSum = 0;

    cout<<"Enter the values: ";

    for(i=0; i<18; i++)
    {
        cin>>arrNum[i];

        arrSum += arrNum[i];

    }

    cout<<"The average of all the elements are: "<<arrSum/18;

    return 0;
}