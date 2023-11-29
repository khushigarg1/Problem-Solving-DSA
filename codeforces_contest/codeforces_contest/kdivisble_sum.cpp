#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int ans = INT_MAX;
        if (n == 1)
        {
            ans = k;
        }
        if (n == k)
        {
            ans = 1;
        }
        else if (n < k)
        {
            if (k % n == 0)
            {
                ans = k / n;
            }
            else
            {
                ans = (k / n) + 1;
            }
        }
        else
        {
            int div = n / k;
            int rem = n % k;
            if (rem != 0)
            {
                div++;
            }
            k *= div;
            if (k % n != 0)
            {
                ans = (k / n) + 1;
            }
            else
            {
                ans = k / n;
            }
        }
        cout << ans;
    }
    return 0;
}