#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int i,j;
    char temp;
    string s;
    cin>>s;
    for(i=0;i < s.length();i=i+2)
    {
        for(j=0;j<s.length()-1;j=j+2)
        {
        if(s[j]>s[j+2])
        {
            temp=s[j+2];
            s[j+2]=s[j];
            s[j]=temp;
        }
        }
    }
    cout<<s;
return 0;
}