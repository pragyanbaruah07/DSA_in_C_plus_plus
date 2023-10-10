// You are given an array arr[] of N integers. The task is to find the smallest positive 
// number missing from the array.
// Note: Positive number starts from 1.


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        
        bool present[n + 1] = {false};
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0 && arr[i] <= n)
            present[arr[i]] = true;
        }
        for (int i = 1; i <= n; i++)
        {
            if (!present[i])
            return i;
        }
        return n + 1;
    
        
    }
        
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 