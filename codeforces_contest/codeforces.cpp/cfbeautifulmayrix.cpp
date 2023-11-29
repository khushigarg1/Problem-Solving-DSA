#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{  
    int i,j,a[100][100],r,c;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                r=abs(3-i);
                c=abs(3-j);
            }
        }
    }
    
    cout<<r+c;
return 0;
}