//Print all the Capital and small letters  using a while loop. It means A-Z, then a-z. 

#include <iostream>
using namespace std;

int main(){

    int i=0, j=0;
    

    cout<<"Capital alphabets: ";
    while(i <= 25)
    {
        cout<<char(65 + i)<<" ";
        i++;
    }
    
    cout<<endl;
    
    cout<<"Small alphabets: ";
    while(j <= 25)
    {
        cout<<char(97 + j)<<" ";
        j++;
    }
    

    
}