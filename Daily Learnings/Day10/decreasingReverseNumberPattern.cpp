// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
/*       5
       5 4
     5 4 3
   5 4 3 2 
 5 4 3 2 1 */

#include <iostream>
using namespace std;

int main(){
int n;

cout<<"Enter the number: ";
cin>>n;

for(int i=n; i>=1; i--)
{
    for(int j=n; j>=(n-i+1); j--)
    {
        cout<<"  ";
    }
    for(int j=n; j>=i; j--)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}

}