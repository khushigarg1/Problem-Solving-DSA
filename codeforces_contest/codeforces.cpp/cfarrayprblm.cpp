#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[n],a[n+1],i,max,max2,d;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

       if(a[0]>a[1])
       {
           max=a[1];
           max2=a[0];
       }
       else{
           max2=a[0];
           max=a[1];
       }

    for(i=2;i<n;i++)
    {
        if(a[i]>max)
        {
            max2=max;
            max=a[i];
        }
        else if (a[i]>max2)
        {
            max2=a[i];
        }
    }   
        d=max-max2;    
    for(i=n+1;    ;i--)
    {
        a[i]=a[i-1];
    }
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
   return 0;
}