#include <bits/stdc++.h>
using namespace std;

int find_mincoin(int n, vector<int> &v, int target, vector<vector<int>> &dp)
{
    // if (target == 0)
    // {
    //     return 1;
    // }
    if (n == 0)
    {
        if ((target % v[n]) == 0)
        {
            return (target / v[0]);
        }
        else
        {
            return 1e9;
        }
    }
    if (dp[n][target] != -1)
    {
        return dp[n][target];
    }
    int nontake = 0 + find_mincoin(n - 1, v, target, dp);
    int take = INT_MAX;
    if (target >= v[n])
    {
        take = 1 + find_mincoin(n, v, target - v[n], dp);
    }
    return dp[n][target] = min(nontake, take);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;

    vector<vector<int>> dp(n, vector<int>(target + 1, -1));
    int ans = find_mincoin(n - 1, v, target, dp);
    // cout << ans;

    // vector<vector<int>> dp(n, vector<int>(target + 1, 0));
    // for (int i = 0; i <= target; i++)
    // {
    //     if (i % v[0] == 0)
    //     {
    //         dp[0][i] = i / v[0];
    //     }
    //     else
    //     {
    //         dp[0][i] = 1e9;
    //     }
    // }
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j <= target; j++)
    //     {
    //         int nontake = dp[i - 1][j];
    //         int take = INT_MAX;
    //         if (j >= v[i])
    //         {
    //             take = 1 + dp[i][j - v[i]];
    //         }
    //         dp[i][j] = min(nontake, take);
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= target; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    if (ans == INT_MAX)
    {
        cout << -1;
    }
    else
        cout << dp[n - 1][target];
    return 0;
}