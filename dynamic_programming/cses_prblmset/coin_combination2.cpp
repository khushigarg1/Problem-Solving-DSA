#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int findsum(int ind, vector<int> &v, int target, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        return (target % v[0] == 0);
    }
    if (target == 0)
    {
        return 1;
    }
    if (dp[ind][target] != -1)
    {
        return dp[ind][target];
    }
    int notpick = findsum(ind - 1, v, target, dp) % mod;
    int pick = 0;
    if (target >= v[ind])
    {
        pick = findsum(ind, v, target - v[ind], dp) % mod;
    }
    return dp[ind][target] = (pick + notpick) % mod;
}
int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> dp(x + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i]; j <= x; j++)
        {
            dp[j] = (dp[j] + dp[j - arr[i]]) % mod;
        }
    }
    cout << dp[x] % mod;

    // vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    // dp[0][0] = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j <= x; j++)
    //     {
    //         int notpick = dp[i - 1][j] % mod;
    //         int pick = 0;
    //         if (j >= arr[i - 1])
    //         {
    //             pick = dp[i][j - arr[i - 1]] % mod;
    //         }
    //         dp[i][j] = (pick + notpick) % mod;
    //     }
    // }
    // // int ans = findsum(n - 1, arr, x, dp);
    // cout << dp[n][x] % mod;
    return 0;
}