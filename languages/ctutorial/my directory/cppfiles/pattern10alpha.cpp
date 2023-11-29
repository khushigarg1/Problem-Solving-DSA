#include<iostream>
using namespace std;

int main()
{
    int i,j;
    char ch;
     for(i=1;i<5;i++)
     {
        
         for(j=1;j<=i;j++)
         {
            ch=64+i;
             cout<<ch;
             
         }
         cout<<"\n";
     }

}