// Find the index of a specific element in an array, if the element is nor present, print -1. 
// Ask the size of the array from the user and then implement it.


#include <iostream>
using namespace std;

int main(){

    int size, i, arrElements[1000], specificElement;

    cout<<"Enter the array size: ";
    cin>>size;

    for(i=0; i<size; i++)
    {
        cin>>arrElements[i];
    }

    cout<<"Enter the specific element: ";
    cin>>specificElement;

    int index = -1;

    for(i=0; i<size; i++)
    {
        if(specificElement == arrElements[i])
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    cout<<"Element is present at index: "<<index;
    else
    cout<<"Element is not present error: "<<index;


    return 0;
}