#include <bits/stdc++.h>
using namespace std;
int maxpathsum(int i, int j, int n, int m, vector<vector<int>> &v, vector<vector<int>> &dp)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return 0;
    }
    if (i == n - 1)
    {
        return v[i][j];
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int leftd = v[i][j] + maxpathsum(i + 1, j - 1, n, m, v, dp);
    int bottom = v[i][j] + maxpathsum(i + 1, j, n, m, v, dp);
    int rightd = v[i][j] + maxpathsum(i + 1, j + 1, n, m, v, dp);

    int temp = max(rightd, leftd);
    return dp[i][j] = max(bottom, temp);
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, -1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(m, -1));
    // int maxx = INT_MIN;
    // for (int i = 0; i < m; i++)
    // {
    //     int ans = maxpathsum(0, i, n, m, v, dp);
    //     maxx = max(ans, maxx);
    // }
    // cout << maxx;

    //---------------------------------------TABULATION METHOD---------------------------------
    // for (int i = 0; i < m; i++)
    // {
    //     dp[0][i] = v[0][i];
    // }
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         int bottom = v[i][j] + dp[i - 1][j];
    //         int leftd = 0, rightd = 0;
    //         if (i > 0 && j > 0)
    //         {
    //             leftd = v[i][j] + dp[i - 1][j - 1];
    //         }
    //         if (i > 0 && j < m - 1)
    //         {
    //             rightd = v[i][j] + dp[i - 1][j + 1];
    //         }
    //         dp[i][j] = max({leftd, rightd, bottom});
    //     }
    // }
    // int maxx = 0;
    // for (int i = 0; i < m; i++)
    // {
    //     maxx = max(maxx, dp[n - 1][i]);
    // }
    // cout << maxx;

    //---------------------------------------SPACE OPTIMIZATION---------------------------------
    vector<int> prev(m);
    for (int i = 0; i < m; i++)
    {
        prev[i] = v[0][i];
    }
    for (int i = 1; i < n; i++)
    {
        vector<int> curr(m);
        for (int j = 0; j < m; j++)
        {
            int bottom = v[i][j] + prev[j];
            int leftd = 0, rightd = 0;
            if (i > 0 && j > 0)
            {
                leftd = v[i][j] + prev[j - 1];
            }
            if (i > 0 && j < m - 1)
            {
                rightd = v[i][j] + prev[j + 1];
            }
            curr[j] = max({leftd, rightd, bottom});
        }
        prev = curr;
    }
    int maxx = 0;
    for (int i = 0; i < m; i++)
    {
        maxx = max(maxx, prev[i]);
    }
    cout << maxx;

    return 0;
}
