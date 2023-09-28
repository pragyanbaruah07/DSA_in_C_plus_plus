// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
/*        E
        E D
      E D C
    E D C B
  E D C B A */

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
    int count = 0;
    for(int j=n; j>=i; j--)
    {
       cout<<char(69-count)<<" ";
       count++;
    }
    cout<<endl;
}

}