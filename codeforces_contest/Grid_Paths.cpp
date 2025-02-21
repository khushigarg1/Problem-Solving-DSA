#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
  int n;
  cin >> n;
  vector<vector<char>> arr(n, vector<char>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }

  vector<vector<int>> dp(n, vector<int>(n, 0));
  if (arr[0][0] != '*')
    dp[0][0] = 1;
  else
    dp[0][0] = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if ((i == 0) && (j == 0))
        continue;

      if (j - 1 >= 0 && arr[i][j] != '*')
        dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;

      if (i - 1 >= 0 && arr[i][j] != '*')
        dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
    }
  }
  cout << dp[n - 1][n - 1] << endl;
}