// Given a sorted array of distinct integers and a target value, return the index if the target is found. 
// If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.

#include <iostream>
using namespace std;


int BinarySearch(int arr[], int n, int victim)
{
    int mid, start=0, end=n-1;

     while(start <= mid)
     {

        mid = start + (end-start)/2;
        
        if(arr[mid] == victim)
        {
            return mid;
        }
        else if(arr[mid] < victim)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
     }

     return start;
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