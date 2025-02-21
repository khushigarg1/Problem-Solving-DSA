#include <bits/stdc++.h>
using namespace std;

// int findans(int i, int x, const vector<int> &arr, vector<vector<int>> &dp)
// {
//     if (x == 0)
//     {
//         return 0;
//     }
//     if (i < 0 || x < 0)
//     {
//         return INT_MAX - 1;
//     }
//     if (dp[i][x] != -1)
//     {
//         return dp[i][x];
//     }
//     int take = 1 + findans(i, x - arr[i - 1], arr, dp);
//     int nontake = findans(i - 1, x, arr, dp);
//     return dp[i][x] = min(take, nontake);
// }

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, INT_MAX - 1));
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (arr[i - 1] <= j)
            {
                int take = 1 + dp[i][j - arr[i - 1]];
                int nontake = dp[i - 1][j];
                dp[i][j] = min(take, nontake);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    // cout << (dp[n][x] >= INT_MAX - 1) ? -1 : dp[n - 1][x];
    // vector<vector<int>> dp(n + 1, vector<int>(x + 1, -1));
    // int ans = findans(n, x, arr, dp);
    if (dp[n][x] == INT_MAX || dp[n][x] == INT_MAX - 1)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << dp[n][x];
    }
    return 0;
}
