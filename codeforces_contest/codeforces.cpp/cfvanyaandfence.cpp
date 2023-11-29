#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int n,h,i,j,a,w=0;
    cin>>n>>h;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a>h)
        {
            w=w+2;
        }
        else
        {
            w++;
        }
    }
    cout<<w;
return 0;
}