// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
/*          A
          A B A
        A B C B A
      A B C D C B A
    A B C D E D C B A
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i =1; i <=n; i++)
    {
        for(int j=1; j<=(n-i); j++)
        {
            cout<<"  ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<char(65+j-1)<<" ";
        }
        for(int j=i-1; j>=1; j--)
        {
            cout<<char(65+j-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}