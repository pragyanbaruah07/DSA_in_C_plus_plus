//Find the total number of Squares in a N*N chessboard.

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        
        if(N == 1)
        return 1;
        
        long long sum = 0;
        
        for(long long i=1; i <= N; i++)
        {
            sum += i * i;
        }
        
        return sum;
    }
};