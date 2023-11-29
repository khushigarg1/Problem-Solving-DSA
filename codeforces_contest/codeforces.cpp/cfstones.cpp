#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int i,n,res=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<s.length();i++)
    { 
        if(s[i]==s[i+1])
        res++;
    }
     cout<<res;
return 0;
}