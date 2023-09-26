// Pattern
  /*A B C D
    A B C
    A B
    A*/

#include <iostream>
using namespace std;

int main(){

for(int i = 4; i >= 1; i--)
{
    for(int j = 0; j < i; j++)
    {
        cout<<char(65 + j)<<" ";
    }
    cout<<endl;
}

}