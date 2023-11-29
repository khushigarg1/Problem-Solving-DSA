#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int i,n,k;
    cin>>n>>k;
    for(i=0;i<k;i++)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
        n=n-1;
        }
    }
    cout<<n;
return 0;
}