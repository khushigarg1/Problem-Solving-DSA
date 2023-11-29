#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int i,x,res;
    cin>>x;
    res=x/5;
    if(x%5==0)
    {
       cout<<res;
    }
    else 
    {
        cout<<(res+1);
    } 
return 0;
}