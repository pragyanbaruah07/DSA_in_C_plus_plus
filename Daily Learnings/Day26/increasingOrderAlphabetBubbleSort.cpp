// Bubble Sort Algorithm to sort the array of integers in increasing order by taking the 
// smallest number to first place by starting from the last

#include <iostream>
using namespace std;

int main(){

char arr[1000];
int n;
cout<<"Enter the size of array: ";
cin>>n;

cout<<"Enter the elements of array: ";
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}

// 5 4 3 2 1

for(int i=n-2; i>=0; i--)
    {
        bool swapped = 0;
        for(int j=n-1; j>n-i-2; j--)
        {
            if(arr[j-1] > arr[j])
                {
                swapped = 1;
                swap(arr[j-1],arr[j]);
                }
        }
        if(swapped == 0)
        break;
    }

for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;

}