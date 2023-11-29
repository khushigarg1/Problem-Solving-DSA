/*
buy and sell stock si just like
given an array
index is day and value is just like price
if a person buy at this day at this price then he want to get max profit by selling them /
and her emain imp i if he bought any one stock then have to sell prev one before buying new
he can buy and sell at aht day onl but not allow negative profit


*/

#include <bits/stdc++.h>
using namespace std;
long maxprofit(int n, int size, vector<long> &v, int buy, vector<vector<int>> &dp)
{
    if (n == size)
    {
        return 0;
    }

    if (dp[n][buy] != -1)
    {
        return dp[n][buy];
    }
    long profit = 0;

    if (buy)
    {
        profit = max((-v[n] + maxprofit(n + 1, size, v, 0, dp)), 0 + maxprofit(n + 1, size, v, 1, dp));
    }
    else
    {
        profit = max(v[n] + maxprofit(n + 1, size, v, 1, dp), 0 + maxprofit(n + 1, size, v, 0, dp));
    }
    return dp[n][buy] = profit;
}
int main()
{
    int n;
    cin >> n;
    vector<long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // vector<vector<int>> dp(n, vector<int> (2,-1));
    // long ans = maxprofit(0, n, v, 1, dp);
    // cout << ans;
    vector<vector<long>> dp(n + 1, vector<long>(2, 0));
    dp[n][0] = dp[n][1] = 0;
    long profit = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= 1; j++)
        {
            profit = 0;
            if (j == 1)
            {
                profit = max((-v[i] + dp[i + 1][0]), 0 + dp[i + 1][1]);
            }
            else
            {
                profit = max(v[i] + dp[i + 1][1], 0 + dp[i + 1][0]);
            }
            dp[i][j] = profit;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << dp[0][1];
    return 0;
}