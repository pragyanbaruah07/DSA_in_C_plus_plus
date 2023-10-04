// For an input year N, find whether the year is a leap or not. 

class Solution{
public:
    int isLeap(int N){
        //c
        
        if(N % 400 == 0)
        return 1;
        
        else if((N % 100 != 0) && (N % 4 == 0))
        return 1;
        
        else
        return 0;
        
        
    }
};