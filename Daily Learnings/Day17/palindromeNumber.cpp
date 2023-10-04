// Given an integer x, return true if x is a palindrome, and false otherwise.


class Solution {
public:
    bool isPalindrome(int x) {
        
        int ans  = 0, rem, num =x;
        if (x < 0)
        return 0;

        while(x)
        {
            rem = x % 10;
            x /= 10;
            if(ans > INT_MAX / 10)
            return 0;
            ans = ans * 10 + rem;
        }

        return num == ans;

    }
};