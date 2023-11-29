#include <bits/stdc++.h>
using namespace std;

int minsum(int row, int col, vector<vector<int>> &v, vector<vector<int>> &dp)
{
    if (row == 0 && col == 0)
    {
        return v[0][0];
    }
    if (row < 0 || col < 0)
    {
        return 1e9;
    }
    if (dp[row][col] != -1)
    {
        return dp[row][col];
    }
    int up = v[row][col] + minsum(row - 1, col, v, dp);
    int left = v[row][col] + minsum(row, col - 1, v, dp);
    return dp[row][col] = min(up, left);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    vector<vector<int>> dp(n, (vector<int>(m, -1)));
    // int ans = minsum(n - 1, m - 1, v, dp);
    // cout << ans;

    //------------------------------------TABULATION METHOD---------------------------------
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (i == 0 && j == 0)
    //         {
    //             dp[i][j] = v[0][0];
    //         }
    //         else
    //         {
    //             int up = v[i][j];
    //             if (i > 0)
    //                 up += dp[i - 1][j];
    //             else
    //                 up += 1e9;

    //             int left = v[i][j];
    //             if (j > 0)
    //                 left += dp[i][j - 1];
    //             else
    //                 left += 1e9;

    //             dp[i][j] = min(up, left);
    //             cout << dp[i][j] << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << dp[n - 1][m - 1];

    //-----------------------------SPACE OPTIMIZATION-----------------------------
    vector<int> prev(m, 0);
    for (int i = 0; i < n; i++)
    {
        vector<int> curr(m, 0);
        for (int j = 0; j < m; j++)
        {
            if (i == 0 && j == 0)
            {
                curr[j] = v[i][j];
            }
            else
            {
                int up = v[i][j];
                if (i > 0)
                {
                    up += prev[j];
                }
                else
                {
                    up += 1e9;
                }

                int left = v[i][j];
                if (j > 0)
                {
                    left += curr[j - 1];
                }
                else
                {
                    left += 1e9;
                }
                curr[j] = min(up, left);
            }
        }
        prev = curr;
    }
    cout << prev[m - 1];
    return 0;
}