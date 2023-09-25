// Pattern:
 /* F G H I J K  
    F G H I J K
    F G H I J K
    F G H I J K
    F G H I J K */

#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            cout<<char(70 + j)<<" ";
        }
        cout<<endl;
    }
}