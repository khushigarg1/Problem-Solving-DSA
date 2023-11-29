#include <bits/stdc++.h>
using namespace std;
long long findnum(long long n, long long m, vector<int> &arr, vector<long long> &dp)
{
    cout << n << " " << m << endl;
    if (n == m)
    {
        return 1;
    }
    if (n < 0 || m < 0 || m < n)
    {
        return -1;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    long long c1 = 1 + findnum(n * 2, m, arr, dp);
    long long c2 = 1 + findnum(n * 4, m, arr, dp);
    long long c3 = 1 + findnum(n * 8, m, arr, dp);
    long long minimum_count = min({c1, c2, c3});
    return dp[n] = minimum_count;
}
long long finddivide(long long n, long long m, vector<int> &arr, vector<long long> &dp, int count)
{
    if (n < 0 || m < 0 || n >= INT_MAX || m >= INT_MAX || n % 2 != 0 || n % 4 != 0 || n % 8 != 0)
    {
        return -1;
    }

    if (n == m)
    {
        return count;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    long long c1 = (n % 2 == 0) ? finddivide(n / 2, m, arr, dp, count + 1) : LLONG_MAX;
    long long c2 = (n % 4 == 0) ? finddivide(n / 4, m, arr, dp, count + 1) : LLONG_MAX;
    long long c3 = (n % 8 == 0) ? finddivide(n / 8, m, arr, dp, count + 1) : LLONG_MAX;

    return dp[n] = min({c1, c2, c3});
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n, m;
        cin >> n >> m;
        vector<int> arr = {2, 4, 8};
        vector<long long> dp(n + 1, -1);
        long long ans;
        if (n < m)
        {
            ans = findnum(n, m, arr, dp);
        }
        if (n > m)
        {
            ans = finddivide(n, m, arr, dp, 0);
        }
        else
        {
            ans = 0;
        }
        cout << ans;
    }

    return 0;
}