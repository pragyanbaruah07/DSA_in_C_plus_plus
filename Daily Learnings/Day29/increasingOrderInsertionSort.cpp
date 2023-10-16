// Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the 
// last element of the array. 


#include <iostream>
using namespace std;

int main(){

    int arr[1000], n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elemts of array: ";
    for(int i = 0; i< n; i++)
    cin>>arr[i];

    //insertion sort

    for(int i=n-1; i>0; i--)
    {
        for(int j=i; j<n; j++)
        {
            if(arr[j] < arr[j-1])
            swap(arr[j],arr[j-1]);
            else 
            break;
        }
    }


    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;
}