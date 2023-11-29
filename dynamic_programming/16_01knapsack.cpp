#include <bits/stdc++.h>
using namespace std;

int findmaxweight(int n, vector<int> &weights, vector<int> &price, int maxcapacity, vector<vector<int>> &dp)
{
    if (n == 0)
    {
        if (weights[0] <= maxcapacity)
        {
            return price[0];
        }
        else
        {
            return 0;
        }
    }
    if (dp[n][maxcapacity] != -1)
    {
        return dp[n][maxcapacity];
    }
    int nontake = 0 + findmaxweight(n - 1, weights, price, maxcapacity, dp);
    int take = INT_MIN;
    if (weights[n] <= maxcapacity)
    {
        take = price[n] + findmaxweight(n - 1, weights, price, maxcapacity - weights[n], dp);
    }
    return dp[n][maxcapacity] = max(nontake, take);
}

int main()
{
    int n;
    cin >> n;
    vector<int> weights(n);
    vector<int> price(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    int maxcapcaity;
    cin >> maxcapcaity;

    // int ans = findmaxweight(n-1, weights, price, maxcapcaity);
    // cout << ans;
    vector<vector<int>> dp(n, vector<int>(maxcapcaity + 1, 0));

    vector<int> prev(maxcapcaity + 1, 0), curr(maxcapcaity + 1, 0);
    for (int w = weights[0]; w <= maxcapcaity; w++)
    {
        // dp[0][w] = price[0];
        prev[w] = price[0];
        cout << prev[w] << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        for (int w = 0; w <= maxcapcaity; w++)
        {
            int nontake = 0 + prev[w];
            int take = INT_MIN;
            if (weights[i] <= w)
            {
                take = price[i] + prev[w - weights[i]];
            }
            curr[w] = max(take, nontake);
            // int nontake = 0 + dp[i - 1][w];
            // int take = INT_MIN;
            // if (weights[i] <= w)
            // {
            //     take = price[i] + dp[i - 1][w - weights[i]];
            // }
            // dp[i][w] = max(take, nontake);
            cout << curr[w] << " ";
        }
        cout << endl;
        prev = curr;
    }
    // cout << dp[n - 1][maxcapcaity];
    cout << prev[maxcapcaity];
    return 0;
}