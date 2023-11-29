#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char ch;
    
    for ( i = 1; i < 5; i++)
    {
        ch=65;
        for ( j = 1; j <=i; j++)
        {
            cout<<ch;
            ch++; 
       }
     cout<<"\n";   
    }
    
    return 0;
}