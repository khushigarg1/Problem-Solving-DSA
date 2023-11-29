#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int i,n,p,q,room=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        if(q-p>=2)
        {
            room++;
        }
    }
    cout<<room;
return 0;
}