//The complement of an integer is the integer you get when you flip all the 0's to 1's and all 
//the 1's to 0's in its binary representation.

class Solution {
public:
    int bitwiseComplement(int n) {
        
        int ans=0, rem, mul = 1;

        if(n == 0)
        return 1;

        while(n)
        {
            rem = n % 2;
            rem = rem ^ 1;
            n /= 2;
            ans = ans + rem * mul;
            mul *= 2;
        }

        return ans;

    }
};