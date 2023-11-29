#include <bits/stdc++.h>
using namespace std;

int uniqueobstacles(int row, int col, vector<vector<int>> &dp, vector<vector<int>> &vec)
{
    if (row >= 0 && col >= 0 && vec[row][col] == -1)
    {
        return 0;
    }
    if (row == 0 && col == 0)
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
    int up = uniqueobstacles(row - 1, col, dp, vec);
    int left = uniqueobstacles(row, col - 1, dp, vec);
    return dp[row][col] = up + left;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    vector<vector<int>> dp(n, vector<int>(m, -1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    // int ans = uniqueobstacles(n - 1, m - 1, dp, vec);
    // cout << ans << endl;

    //---------------tabulation------------
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (vec[i][j] == -1)
    //         {
    //             dp[i][j] = 0;
    //         }
    //         else if (i == 0 && j == 0)
    //         {
    //             dp[i][j] = 1;
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

    //----------------------------space optimization-------------------
    vector<int> prev(m, 0);
    for (int i = 0; i < n; i++)
    {
        vector<int> curr(m, 0);
        for (int j = 0; j < m; j++)
        {
            if (vec[i][j] == -1)
            {
                curr[j] = 0;
            }
            else if (i == 0 && j == 0)
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