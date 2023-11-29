#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int i,X=0,n;
    string s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        if(s[0]=='X')
        {
            if(s[2]=='+')
            {
                X++;
            }
            else{
                X--;
            }
        }
        else if(s[2]=='X')
        {
            if(s[0]=='+')
            {
                ++X;
            }
            else{
                --X;
            }
        }
    }
    cout<<X;
return 0;
}