#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,a[100],c=0,b=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            b++;
        }
        if(a[i]==0)
        {
            c++;
        }
    }
    if(b==0)
    {
        cout<<"EASY";
    }
    else
    {
        cout<<"HARD";
    }

return 0;
}