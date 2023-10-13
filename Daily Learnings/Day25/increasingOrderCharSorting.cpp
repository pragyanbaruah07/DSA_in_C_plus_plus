// Use a Selection Sort Algorithm to sort the array of char in ascending order.

#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter the size of array: ";
    cin>>n;

    char arr[30];

    cout<<"Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //sorting
    for(int i = 0; i < n-1; i++)
    {
        int index = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[index])
            {
                index = j;
            }

            swap(arr[i],arr[index]);
        }
    }

    cout<<"The sorted increasing order array is: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

}