// Given an unsorted array arr[] of size N having both negative and positive integers. 
// The task is place all negative element at the end of array without changing the order of positive element
// and negative element.

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        
        int positiveIndex = 0, tempArr[n];
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > 0)
            tempArr[positiveIndex++] = arr[i];
        }
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] < 0)
            tempArr[positiveIndex++] = arr[i];
        }
        
        for(int i = 0; i < n; i++)
        {
            arr[i] = tempArr[i];
        }
        
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}