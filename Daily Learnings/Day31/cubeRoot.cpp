// Given a number N, find the cube root of N.
// Note: We need to print the floor value of the result.

class Solution {
  public:
    int cubeRoot(int N) {
        // code here
        
        long long start =0, end=N, mid, ans =0;
        
        if(N<2)
        return N;
        
        while(start <= end)
        {
            mid = start + (end- start)/2;
            
            if(mid*mid*mid == N)
            {
                ans = mid;
                break;
            }
            else if(mid*mid*mid < N)
            {
                ans = mid;
                start =  mid + 1;
            }
            else
            end = mid - 1;
        }
        
        return ans;
    }
};