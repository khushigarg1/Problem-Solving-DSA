#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j>=0 && j<5-i)
            {
            cout<<"*";
            }
            else
            {
             cout<<" ";
            }
        }
        cout<<"\n";
        
    }

    // for(i=0;i<5;i++)
    // {
    //     for(j=4;j>=i;j--)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }
}