// int solve(int i, int j, int k, string a, string b, string c, vector<vector<int>> &dp)
// {
//   if (k >= c.length())
//   {
//     return 0;
//   }
//   if (i == a.length() && j == b.length())
//   {
//     return INT_MAX;
//   }
//   if (dp[i][j] != -1)
//   {
//     return dp[i][j];
//   }
//   int count = INT_MAX;
//   if (i < a.length() && a[i] == c[k])
//   {
//     count = min(count, solve(i + 1, j, k + 1, a, b, c, dp));
//   }
//   else if (i < a.length())
//   {
//     count = min(count, 1 + solve(i + 1, j, k + 1, a, b, c, dp));
//   }

//   if (j < b.length() && b[j] == c[k])
//   {
//     count = min(count, solve(i, j + 1, k + 1, a, b, c, dp));
//   }
//   else if (j < b.length())
//   {
//     count = min(count, 1 + solve(i, j + 1, k + 1, a, b, c, dp));
//   }
//   return dp[i][j] = count;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    string a, b, c;
    cin >> a >> b >> c;

    int n = a.length();
    int m = b.length();
    int l = c.length();

    if (n + m != l)
    {
      cout << -1 << endl;
      continue;
    }

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));
    dp[n][m] = 0;

    for (int i = n; i >= 0; i--)
    {
      for (int j = m; j >= 0; j--)
      {
        int k = i + j;

        if (k >= l)
          continue;

        if (i < n && a[i] == c[k])
        {
          dp[i][j] = min(dp[i][j], dp[i + 1][j]);
        }
        if (i < n)
        {
          dp[i][j] = min(dp[i][j], 1 + dp[i + 1][j]);
        }

        if (j < m && b[j] == c[k])
        {
          dp[i][j] = min(dp[i][j], dp[i][j + 1]);
        }
        if (j < m)
        {
          dp[i][j] = min(dp[i][j], 1 + dp[i][j + 1]);
        }
      }
    }

    cout << dp[0][0] << endl;
  }

  return 0;
}
