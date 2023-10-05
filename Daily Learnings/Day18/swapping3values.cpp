// There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a.
// Do it using Function.


#include <iostream>
using namespace std;

void swapped(int &a, int &b, int &c)
{   
    int temp = a;
    a = b;
    b = c;
    c = temp;

    cout<<"THe swapped values are: "<<a<<" "<<b<<" "<<c;
}



int main()
{
    int n1,n2,n3;

    cout<<"Enter the three values: ";
    cin>>n1>>n2>>n3;

    swapped(n1,n2,n3);

}