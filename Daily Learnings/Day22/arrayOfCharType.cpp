// Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.


#include <iostream>
using namespace std;

int main(){

    char arrChar[26];

    for(int i=0; i<26; i++)
    {
        arrChar[i] = char(97+i);
    }

    for(int i=0; i<26; i++)
    {
        cout<<arrChar[i]<<" ";
    }

    return 0;
}