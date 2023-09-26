// Pattern
  /*10
    10 11
    10 11 12
    10 11 12 13
    10 11 12 13 14
    10 11 12 13 14 15*/

#include <iostream>
using namespace std;

int main(){

for(int i = 1; i <=6; i++)
{
    int count = 10;
    for(int j = 1; j <= i; j++)
    {
        cout<<count<<" ";
        count += 1;
    }
    cout<<endl;
}

}