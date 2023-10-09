// Find the third smallest element in an array of unique elements size n. Where n>3.




#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int size, arrNum[1000], smallest=INT_MAX, secondSmallest = INT_MAX, thirdSmallest=INT_MAX;

    cout<<"Enter the size for array: ";
    cin>>size;

    if (size < 3) {
        cout << "The array should have at least three elements." << endl;
        return 1; 
    }

    for(int i=0; i<size; i++)
    {
        cin>>arrNum[i];
    }

    for(int i=0; i<size; i++)
    {
        if(arrNum[i] < smallest)
        {
            thirdSmallest = secondSmallest;
            secondSmallest = smallest;
            smallest = arrNum[i];
        }
        else if(arrNum[i] < secondSmallest && arrNum[i] != smallest)
        {
            thirdSmallest = secondSmallest;
            secondSmallest = arrNum[i];
        }
        else if(arrNum[i] < thirdSmallest && arrNum[i] != smallest && arrNum[i] != secondSmallest)
        {
            thirdSmallest = arrNum[i];
        }

    }

    cout<<"The third smallest element in the array is : "<<thirdSmallest;


    return 0;
}