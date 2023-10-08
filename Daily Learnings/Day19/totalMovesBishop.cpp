// Given the position of a Bishop (A, B) on an 8 * 8 chessboard.
// Your task is to count the total number of squares that can be visited by the Bishop in one move.
// The position of the Bishop is denoted using row and column number of the chessboard.

#include <iostream>
using namespace std;

int solve(int A, int B) {
    
    int count = 0;

    count+= min(8-A, 8-B);
    count+= min(8-A, B-1);
    count+= min(A-1, B-1);
    count+= min(A-1, 8-B);

    return count;      
}


int main(){

    int move_a , move_b;
    cout<<"Enter the numbers: ";
    cin>>move_a>>move_b;

    cout<<solve(move_a, move_b);


}