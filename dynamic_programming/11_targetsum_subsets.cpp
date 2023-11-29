#include <bits/stdc++.h>
using namespace std;

bool istarget(int ind, int target, vector<int> &v, vector<vector<int>> &dp)
{
    if (target == 0)
    {
        return true;
    }
    if (ind == 0)
    {
        return (v[0] == target);
    }
    if (dp[ind][target] != -1)
    {
        return dp[ind][target];
    }
    bool nontake = istarget(ind - 1, target, v, dp);
    bool take = false;
    if (target >= v[ind])
    {
        take = istarget(ind - 1, target - v[ind], v, dp);
    }
    return dp[ind][target] = (nontake || take);
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
    // cout << istarget(n - 1, target, v, dp);

    //--------------------------------  tabulation   method--------------------
    // vector<vector<int>> dp(n, vector<int>(target + 1, 0));
    // for (int i = 0; i < n; i++)
    // {
    //     dp[i][0] = true;
    // }
    // dp[0][v[0]] = true;
    // for (int i = 1; i < n; i++)
    // {
    //     for (int t = 1; t <= target; t++)
    //     {
    //         bool nontake = dp[i - 1][t];
    //         bool take = false;
    //         if (target >= v[i])
    //         {
    //             take = dp[i - 1][t - v[i]];
    //         }
    //         dp[i][t] = take | nontake;
    //     }
    // }
    // cout << dp[n - 1][target];

    //--------------------------------space optimization--------------------------
    vector<bool> prev(target + 1, false), curr(target + 1, false);
    prev[0] = curr[0] = true;
    prev[v[0]] = true;
    for (int i = 1; i < n; i++)
    {
        for (int t = 1; t <= target; t++)
        {
            bool nontake = prev[t];
            bool take = false;
            if (t >= v[i])
            {
                take = prev[t - v[i]];
            }
            curr[t] = (take || nontake);
        }
        prev = curr;
    }
    cout << prev[target];
    return 0;
}