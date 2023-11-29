#include <bits/stdc++.h>
using namespace std;
int findcount(int n, int target, vector<int> &v, vector<vector<int>> &dp)
{
    if (target == 0)
    {
        return 1;
    }
    if (n == 0)
    {
        // cout << v[0] << " " << target << endl;
        return (v[0] == target);
    }
    // If the value is already in dp then simply return it from there
    if (dp[n][target] != -1)
    {
        return dp[n][target];
    }
    // cout << v[n] << " " << target << " " << n << endl;
    int nontake = findcount(n - 1, target, v, dp);
    int take = 0;
    if (v[n] <= target)
    {
        take = findcount(n - 1, target - v[n], v, dp);
    }
    return dp[n][target] = nontake + take;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }
    int target;
    cin >> target;
    vector<vector<int>> dp(n, vector<int>(total + 1, -1));

    // if (total - target < 0 || (total - target) % 2 != 0)
    // {
    //     cout << "-111";
    //     return false;
    // }
    // cout << (total - target) / 2;
    int ans = findcount(n - 1, (total + target) / 2, v, dp);
    cout << ans;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= target; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (dp[i][diff] == "1")
    //     {
    //         if (diff +)
    //     }
    // }
    return 0;
}