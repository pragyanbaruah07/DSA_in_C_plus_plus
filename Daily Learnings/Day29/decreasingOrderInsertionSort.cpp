// Use Insertion Sort Algorithm to sort the array of integers in decreasing order.

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

    for(int i=0; i<n; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(arr[j] > arr[j-1])
            swap(arr[j],arr[j-1]);
            else 
            break;
        }
    }


    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;
}