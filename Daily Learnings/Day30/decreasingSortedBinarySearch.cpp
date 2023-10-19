// An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;

#include <iostream>
using namespace std;


int BinarySearch(int arr[], int n, int victim)
{
    int mid, start=0, end=n-1;

     while(start <= mid)
     {

        int mid = start + (end-start)/2;
        
        if(arr[mid] == victim)
        {
            return mid;
        }
        else if(arr[mid] < victim)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
     }

     return -1;
}

int main(){

    int arr[1000], n, victim;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element you want to search : ";
    cin>>victim;


    cout<<BinarySearch(arr,n,victim);
    return 0;

}