#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int n,f=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            f=f+i;
        } 
        else if(i%2!=0)
        {
            f=f-i;
        }
        else if(i=n)
        {
            f=f+ (pow(-1,n) * n);
        }
    }
    cout<<f;
return 0;
}