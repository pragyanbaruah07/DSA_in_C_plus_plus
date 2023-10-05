//Swap 2 numbers a, b without using extra variables. Range of 
//-10000<=a,b<=100000. 



#include <iostream>
using namespace std;

int main()
{
   
   int a,b;

   cout<<"Enter the two values: ";
   cin>>a>>b;

   a =  a + b;
   b =  a - b;
   a =  a - b;

   cout<<"The swapped values are: "<<a<<" "<<b;


}