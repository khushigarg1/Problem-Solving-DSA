#include <bits/stdc++.h>
using namespace std;

int solve(vector<pair<int, int>> &p, vector<vector<int>> &dp, int w)
{
    int n = p.size();
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 or j == 0)
            {
                dp[i][j] = 0;
            }
            else if (p[i - 1].second > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], p[i - 1].first + dp[i - 1][j - p[i - 1].second]);
            }
        }
    }
    return dp[n][w];
}
//    w 0  1  2  3  4  5  6
// i
// 0    0  0  0  0  0  0  0
// 1    0  0  0  0  0  10 10
// 2    0
// 3    0
// 4    0

int main()
{
    int n;
    cout << "Enter number of objects: ";
    cin >> n;
    int w;
    cout << "Enter capacity of knapsack: ";
    cin >> w;
    vector<pair<int, int>> p(n);
    cout << "Enter price of objects: ";
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first;
    }
    cout << "Enter weigth of objects: ";
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].second;
    }

    vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));
    
    cout << solve(p, dp, w);
    cout << endl;
    cout << endl;
    for(int i = 0 ; i < (n+1);i++)
    {
        for(int j =0; j < (w+1); j++)
        {
            if(dp[i][j] <9)
            cout << dp[i][j]<<"  ";
            else
            cout << dp[i][j]<<" ";
        }
        cout << endl;
    }
}