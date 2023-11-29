#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l = 0, h = n / 2;
    int ans = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (mid * mid <= n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << ans;
    return 0;
}