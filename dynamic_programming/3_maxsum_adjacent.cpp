#include <bits/stdc++.h>
using namespace std;

// adjacent sum not in circle
// int adjacentsum(int *arr, int n, vector<int> &dp)
int adjacentsum(vector<int> &arr, int n, vector<int> &dp)
{
    if (n == 0)
    {
        return arr[n];
    }
    if (n < 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int include = adjacentsum(arr, n - 2, dp) + arr[n];
    int notinclude = adjacentsum(arr, n - 1, dp) + 0;
    return dp[n] = max(include, notinclude);
}

// adjacent element max sum but in cricle so have t take care of first adn alst idnex
int adjacentcircle(vector<int> &val, vector<int> &dp)
{
    vector<int> temp1;
    vector<int> temp2;
    int n = val.size();

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            temp1.push_back(val[i]);
        }
        if (i != n - 1)
        {
            temp2.push_back(val[i]);
        }
    }
    vector<int> dp1(n, -1);
    vector<int> dp2(n, -1);
    return max(adjacentsum(temp1, temp1.size(), dp1), adjacentsum(temp2, temp2.size(), dp2));
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> dp(n, -1);
    int ans = adjacentcircle(arr, dp);
    cout << ans;
    // int ans = adjacentsum(arr, n - 1, dp);
    // cout << ans;

    // tabulation method
    // dp[0] = arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     int take = arr[i];
    //     if (i > 1)
    //     {
    //         take += dp[i - 2];
    //     }
    //     int nontake = dp[i - 1];
    //     dp[i] = max(take, nontake);
    // }
    // for (auto i : dp)
    // {
    //     cout << i << " ";
    // }
    // cout << dp[n - 1];

    //----space optimization------
    // int prev = arr[0];
    // int prev2 = 0;
    // int curri = 0;
    // for (int i = 1; i < n; i++)
    // {
    //     int take = arr[i];
    //     if (i > 1)
    //     {
    //         take += prev2;
    //     }
    //     int nontake = prev;
    //     curri = max(take, nontake);
    //     prev2 = prev;
    //     prev = curri;
    // }
    // cout << curri;
    return 0;
}