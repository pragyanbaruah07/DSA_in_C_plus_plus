// Given n, the number of stones in the heap, return true if you can win the game assuming both you and 
// your friend play optimally, otherwise return false.

class Solution {
public:
    bool canWinNim(int n) {
        
        if(n % 4 == 0)
        return 0;
        else
        return 1;


    }
};