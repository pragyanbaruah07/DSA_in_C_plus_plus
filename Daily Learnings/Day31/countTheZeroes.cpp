// Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's 
// are placed first and then they are followed by all the 0's. Find the count of all the 0's.

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int start = 0, end = n-1, mid, count = 0, first = -1;
        
        while(start <= end)
        {
            mid =  start + (end-start)/2;
            
            if(arr[mid] == 0)
            {
                first = mid;
                end = mid - 1;
            }
            else if(arr[mid] > 0)
            start = mid + 1;
            else
            end =  mid - 1;
        }
        
        return n - first;
        
    }
};