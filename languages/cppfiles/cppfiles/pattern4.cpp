#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<=6;j++)
        {
            if(j>=i && j<=6-i)
            cout<<"*";

            else
            cout<<" ";
        }
        cout<<"\n";
    }
    return (0);
}