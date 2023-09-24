// Print n’th Fibonacci number.

#include <iostream>
using namespace std;

//0 1 1 2 3 5 8 13 21 34
//1 2 3 4 5 6 7  8  9 10

int main(){

    int last_num=0,prev_num=1,curr_num=0, i, n;
    
    curr_num = last_num + prev_num;

    cout<<"Enter the fibonacci number position: ";
    cin>>n;
    
    for(i = 1; i <= (n-3); i++)
    {  
        last_num = prev_num;
        prev_num = curr_num;
        curr_num = last_num + curr_num;
        
    } 
    
    cout<<"The fibonnaci series number at the required position is: "<<curr_num;

}