#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int i,n,t,c;
    string s;
    cin>>n>>t>>s;
    int j=0;
    while(j<t)
    {
        for(i=0;i<n-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
              s[i]='G';
              s[i+1]='B';
              i++;
            }
        }
    j++;
    }
    cout<<s;
return 0;
}