#include <bits/stdc++.h>

int findmax(int i, int j, vector<int> &a, vector<vector<int>> &dp)
{
    if (i > j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = INT_MIN;
    for (int ind = i; ind <= j; ind++)
    {
        int cost = a[i - 1] * a[ind] * a[j + 1] + findmax(i, ind - 1, a, dp) + findmax(ind + 1, j, a, dp);
        ans = max(ans, cost);
    }
    return dp[i][j] = ans;
}
int maxCoins(vector<int> &a)
{
    // Write your code here.
    int n = a.size();
    a.push_back(1);
    a.insert(a.begin(), 1);
    vector<vector<int>> v(n + 1, vector<int>(n + 1, -1));
    int ans = findmax(1, n, a, v);
    return ans;
}