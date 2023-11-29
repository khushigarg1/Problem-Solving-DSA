// count no. of subsets that includes sum of elements of subsets equals to target

#include <bits/stdc++.h>
using namespace std;
int findsum(int ind, vector<int> &v, int target, vector<vector<int>> &dp)
{
    // base conditions
    if (target == 0)
    {
        return 1;
    }
    if (ind == 0)
    {
        return (v[0] == target);
    }
    if (dp[ind][target] != -1)
    {
        return dp[ind][target];
    }
    // not pick or pick element
    // for not picking
    int notpick = findsum(ind - 1, v, target, dp);
    // for picking up
    int pick = 0;
    if (target >= v[ind])
    {
        pick = findsum(ind - 1, v, target - v[ind], dp);
    }
    return dp[ind][target] = pick + notpick;
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
    vector<vector<int>> dp(n, vector<int>(target + 1, 0));
    // int ans = findsum(n - 1, v, target, dp);
    // cout << ans;

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 1;
    }
    if (v[0] <= target)
    {
        dp[0][v[0]] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= target; j++)
        {
            int nonpick = dp[i - 1][j];
            int pick = 0;
            if (j >= v[i])
            {
                pick = dp[i - 1][j - v[i]];
            }
            dp[i][j] = pick + nonpick;
        }
    }
    cout << dp[n - 1][target];

    return 0;
}