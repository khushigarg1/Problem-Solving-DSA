#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int y,a,b,c,d;
    cin>>y;
    while(true)
    {
        y=y+1;
        a=y/1000;
        b=y/100;
        b=b%10;
        c=y/10%10;
        d=y%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            break;
        }
    }
    cout<<y;
return 0;
}