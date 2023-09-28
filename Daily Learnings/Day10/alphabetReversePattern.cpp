// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
/*      A
      B B
    C C C
  D D D D
E E E E E */

#include <iostream>
using namespace std;

int main(){
int n;

cout<<"Enter the number: ";
cin>>n;

for(int i=1; i <=n; i++)
{
    for(int j=1; j<=(n-i); j++)
    {
        cout<<"  ";
    }
    for(int j=1; j<=i; j++)
    {
        cout<<char(65+i-1)<<" ";
    }
    cout<<endl;
}

}