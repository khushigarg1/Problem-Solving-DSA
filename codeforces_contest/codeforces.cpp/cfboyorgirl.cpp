#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,temp,count=0;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        for(j=0;j<s.length() - 1 ;j++)
        {
            if(s[j]>s[j+1])
            {
                temp=s[j+1];
                s[j+1]=s[j];
                s[j]=temp;
            }
        }
    }
    
    
    for(i=0;i<s.length();i++)
    {
        if(s[i]!=s[i+1])
            {
                count++;
            }
    }

    if(count%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    
return 0;
}