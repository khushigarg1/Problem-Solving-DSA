#include<iostream>
using namespace std;
int main()
{
    int n,i,a,b,c,count=0,max=0;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        c=b-a;
        count=count+c;

        if(count>max)
        {
            max = count;
        }
    }
    cout<<max;
    return 0;
}