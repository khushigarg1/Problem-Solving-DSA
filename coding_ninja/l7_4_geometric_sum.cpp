#include<bits/stdc++.h>
using namespace std;

double gsum( int k )
{
    if(k==0)
    {
        return 1;
    }
     
    double ans = gsum( k-1 );
    return  (1.0 / pow(2,k) ) + ans ;
}
int main()
{
    int k ;
    cin >> k;
    cout << gsum(k) <<endl;
return 0;
}