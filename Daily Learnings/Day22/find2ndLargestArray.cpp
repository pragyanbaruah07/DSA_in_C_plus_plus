// Find the second largest element in an array of unique elements of size n. Where n>3.



#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int size, arrNum[1000], largest=INT_MIN, Secondlargest = INT_MIN;

    cout<<"Enter the size for array: ";
    cin>>size;

    for(int i=0; i<size; i++)
    {
        cin>>arrNum[i];
    }

    for(int i=1; i<size; i++)
    {
        if(arrNum[i] > largest)
        {
            Secondlargest = largest;
            largest = arrNum[i];
        }
        else if(arrNum[i] > Secondlargest && arrNum[i] != largest)
        {
            Secondlargest = arrNum[i];
        }

    }

    cout<<"The second largest element in the array is : "<<Secondlargest;


    return 0;
}