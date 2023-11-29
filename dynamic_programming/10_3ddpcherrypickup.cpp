/*
    In a matrix alice at (0,0) and bob is (0,m-1) position
    both can move at right bottom left and if they both meet at same point then count will be add only for once
    if they at diff then add both we have to find amx distance they may cover
*/
#include <bits/stdc++.h>
using namespace std;

int arr[3] = {-1, +0, +1};
int finddistance(int i, int j1, int j2, int n, int m, vector<vector<int>> &v, vector<vector<vector<int>>> &dp)
{
    if (j1 < 0 || j1 >= m || j2 < 0 || j2 >= m)
    {
        return -1e9;
    }
    // there are two conditions afetr reaching at last cell too, first is both are at diff pos then return sum fo both if both are ay same then return only one height
    if (i == n - 1)
    {
        if (j1 == j2)
        {
            return v[i][j1];
        }
        else
        {
            return v[i][j1] + v[i][j2];
        }
    }
    if (dp[i][j1][j2] != -1)
    {
        return dp[i][j1][j2];
    }
    int maxi = 0;
    // explore all paths when alice and bob can go together
    for (int ind = 0; ind < 3; ind++)
    {
        for (int ind1 = 0; ind1 < 3; ind1++)
        {
            if (j1 == j2)
            {
                maxi = max(maxi, (v[i][j1] + finddistance(i + 1, j1 + ind, j2 + ind1, n, m, v, dp)));
            }
            else
            {
                maxi = max(maxi, (v[i][j1] + v[i][j2] + finddistance(i + 1, j1 + ind, j2 + ind1, n, m, v, dp)));
            }
        }
    }
    return dp[i][j1][j2] = maxi;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    // vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    // int ans = finddistance(0, 0, m - 1, n, m, v, dp);
    // cout << ans << endl;

    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, 0)));
    for (int j1 = 0; j1 < m; j1++)
    {
        for (int j2 = 0; j2 < m; j2++)
        {
            if (j1 == j2)
            {
                dp[n - 1][j1][j2] = v[n - 1][j1];
            }
            else
            {
                dp[n - 1][j1][j2] = v[n - 1][j1] + v[n - 1][j2];
            }
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j1 = 0; j1 < m; j1++)
        {
            for (int j2 = 0; j2 < m; j2++)
            {
                int maxi = 0;
                // explore all paths when alice and bob can go together
                for (int ind = -1; ind < +1; ind++)
                {
                    for (int ind1 = -1; ind1 < +1; ind1++)
                    {
                        int val = 0;
                        if (j1 == j2)
                        {
                            val = v[i][j1];
                        }
                        else
                        {
                            val = v[i][j1] + v[i][j2];
                        }
                        if (j1 + ind >= 0 && j1 + ind < m && j2 + ind1 >= 0 && j2 + ind1 < m)
                        {
                            val += dp[i + 1][j1 + ind][j2 + ind1];
                        }
                        else
                        {
                            val += -1e9;
                        }
                        maxi = max(val, maxi);
                    }
                }
                dp[i][j1][j2] = maxi;
            }
        }
    }
    cout << dp[0][0][m - 1];
    return 0;
}