#include <bits/stdc++.h>
using namespace std;

int minpath(int i, int j, int n, vector<vector<int>> &v, vector<vector<int>> &dp)
{
    if (i == n - 1)
    {
        return v[n - 1][j];
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int diag = v[i][j] + minpath(i + 1, j + 1, n, v, dp);
    int bottom = v[i][j] + minpath(i + 1, j, n, v, dp);
    return dp[i][j] = min(diag, bottom);
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    vector<vector<int>> dp;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        vector<int> dp1;
        for (int j = 0; j <= i; j++)
        {
            int val;
            cin >> val;
            temp.push_back(val);
            dp1.push_back(-1);
        }
        v.push_back(temp);
        dp.push_back(dp1);
    }

    // int ans = minpath(0, 0, n, v, dp);
    // cout << ans;

    //--------------------------------------------------Tabulation method------------------------
    // for (int i = 0; i < n; i++)
    // {
    //     dp[n - 1][i] = v[n - 1][i];
    // }
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     for (int j = i; j >= 0; j--)
    //     {
    //         int diag = v[i][j] + dp[i + 1][j + 1];
    //         int bottom = v[i][j] + dp[i + 1][j];
    //         dp[i][j] = min(diag, bottom);
    //     }
    // }
    // cout << dp[0][0];

    //-------------------------------------SPACE OPTIMIZATION------------------------------
    vector<int> prev(n);
    for (int i = 0; i < n; i++)
    {
        prev[i] = v[n - 1][i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        vector<int> curr(n);
        for (int j = i; j >= 0; j--)
        {
            int diag = v[i][j] + prev[j + 1];
            int bottom = v[i][j] + prev[j];
            curr[j] = min(diag, bottom);
        }
        prev = curr;
    }
    cout << prev[0];
    return 0;
}