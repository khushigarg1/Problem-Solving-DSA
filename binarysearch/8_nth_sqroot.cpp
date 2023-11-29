#include <bits/stdc++.h>
using namespace std;

int findnvalue(int n, int m)
{
    return pow(m, n);
}
int findnroot(int n, int m)
{
    int ans = -1;
    int low = 1, high = m;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long temp = findnvalue(n, mid);
        if (temp == m)
        {
            ans = mid;
            return mid;
        }
        if (temp < m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int ans = findnroot(n, m);
    cout << ans;

    return 0;
}