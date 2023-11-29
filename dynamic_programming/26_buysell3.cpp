/*
in this there is a caapciryt of to buy or to sell only 2 stocks
and the user can choose which one he wants to buy or sell and how much money he has left after buying/selling maximize profit
*/

#include <bits/stdc++.h>
using namespace std;
int findmaxprofit(int ind, int n, vector<int> &v, int buy, vector<vector<int>> &dp, int cap)
{
    if (cap == 0)
    {
        return 0;
    }
    if (ind == n)
    {
        return 0;
    }
    if (buy)
    {
        return max((-v[ind] + findmaxprofit(ind + 1, n, v, 0, dp, cap)), findmaxprofit(ind + 1, n, v, 1, dp, cap));
    }
    else
    {
        return max(v[ind] + findmaxprofit(ind + 1, n, v, 1, dp, cap - 1), findmaxprofit(ind + 1, n, v, 0, dp, cap));
    }
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
    // vector<vector<int>> dp(n + 1, vector<int>(2, -1));
    // //                            buy    capaacity
    // int ans = findmaxprofit(0, n - 1, v, 1, dp, 2);
    // cout << ans;

    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            dp[i][j][0] = 0; // cap == 0return 0
        }
    }
    dp[n][0][1] = dp[n][1][1] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= 1; j++)
        {
            for (int k = 1; k <= 2; k++)
            {
                if (j == 1)
                {
                    dp[i][j][k] = max((-v[i] + dp[i + 1][0][k]), dp[i + 1][1][k]);
                }
                else
                {
                    dp[i][j][k] = max((v[i] + dp[i + 1][1][k - 1]), dp[i + 1][0][k]);
                }
            }
        }
    }
    return dp[0][1][2];
    return 0;
}