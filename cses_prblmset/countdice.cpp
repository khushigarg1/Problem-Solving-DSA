#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
int findans(int i, int n, vector<int> &dp)
{
    // cout << i;
    if (i == n)
    {
        return 1;
    }
    if (i > n)
    {
        return 0;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    int sum = 0;

    for (int j = 1; j <= 6; j++)
    {
        sum += findans(i + j, n, dp);
        sum %= MOD;
    }
    return dp[i] = sum % MOD;
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n, -1);
    int ans = findans(0, n, dp);
    cout << ans % MOD;

    return 0;
}