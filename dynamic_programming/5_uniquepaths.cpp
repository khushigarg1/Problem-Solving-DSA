// you can move only right and down find unique m  ahs or number of paths
/*
expreess everyting in terms of indexes row,col (i,j)
explore all paths and do all stuffs
sum up allw ays! max or minimal both
*/

#include <bits/stdc++.h>
using namespace std;

int explorepaths(int row, int col, vector<vector<int>> &dp)
{
    if (row == 0 || col == 0)
    {
        return 1;
    }
    if (row < 0 || col < 0)
    {
        return 0;
    }
    if (dp[row][col] != -1)
    {
        return dp[row][col];
    }
    int up = explorepaths(row - 1, col, dp);
    int left = explorepaths(row, col - 1, dp);
    return dp[row][col] = up + left;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> dp(n, vector<int>(m, -1));

    // int ans += explorepaths(n - 1, m - 1, dp);
    // cout << ans;

    //--------------------------Tabulation-----------------
    // dp[0][0] = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (i == 0 && j == 0)
    //         {
    //             dp[0][0] = 1;
    //         }
    //         else
    //         {
    //             int up = 0, left = 0;
    //             if (i > 0)
    //             {
    //                 up = dp[i - 1][j];
    //             }
    //             if (j > 0)
    //             {
    //                 left = dp[i][j - 1];
    //             }
    //             dp[i][j] = up + left;
    //         }
    //     }
    // }
    // cout << dp[n - 1][m - 1];

    //------------------------------------------SPACE OPTIMIZATION--------------
    vector<int> prev(m, 0);
    for (int i = 0; i < n; i++)
    {
        vector<int> curr(m, 0);
        for (int j = 0; j < m; j++)
        {
            if (i == 0 && j == 0)
            {
                curr[j] = 1;
            }
            else
            {
                int up = 0, left = 0;
                if (i > 0)
                {
                    up = prev[j];
                }
                if (j > 0)
                {
                    left = curr[j - 1];
                }
                curr[j] = up + left;
            }
        }
        prev = curr;
    }
    cout << prev[m - 1];
    return 0;
}