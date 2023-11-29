#include<iostream>
using namespace std;
int main()
{
    int k , r ,c ,rem , ans;
    cin >> k >> r;
    c = k * r;
    rem = c%10;
    if(rem == 0 || rem==r)
    {
        cout << r;
    }
    else{
    ans = 10-rem;
    cout << ans;
    }
    return 0;
}