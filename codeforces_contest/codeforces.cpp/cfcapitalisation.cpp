#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int i;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[0]>='a' && s[0]<='z')
        {
            s[0]='A'+s[0]-'a';
        }
    }
    cout<<s;

return 0;
}