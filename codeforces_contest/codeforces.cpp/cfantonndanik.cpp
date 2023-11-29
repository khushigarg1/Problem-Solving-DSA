#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int i,n,a=0,d=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        if(s[i]=='D')
        {
            d++;
        }
    }
    if(d>a)
    {
        cout<<"Danik";
    }
    else if(a>d)
    {
        cout<<"Anton";
    }
    else
    {
        cout<<"Friendship";
    }

return 0;
}