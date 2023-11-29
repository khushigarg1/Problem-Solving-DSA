#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<"I love ";
        }
        else
        {
            cout<<"I hate ";
        }
        if(i==n)
        {
            cout<<"it ";
        }
        else
        {
            cout<<"that ";
        }
    }
return 0;
}