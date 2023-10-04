// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
// The returned integer should be non-negative as well.

class Solution {
public:
    int mySqrt(int x) {
        
        int i;
        if(x == 0)
        return 0;

        for(i = 1; i <= x; i++)
        {
            if(i > x/i)
            {
                break;
            }
        }

        return i-1;

    }
};