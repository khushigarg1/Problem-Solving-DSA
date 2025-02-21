#include <iostream>
#include <vector>
#include <climits>
#include <string>

using namespace std;

int minResult(string s)
{
  int n = s.size();
  if (n == 1)
  {
    return stoi(s);
  }
  else if (n == 2)
  {
    return stoi(string(1, s[0])) * stoi(string(1, s[1]));
  }
  vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

  for (int i = 0; i < n; ++i)
  {
    dp[i][i] = stoi(string(1, s[i]));
    if (i + 1 < n)
    {
      dp[i][i + 1] = stoi(string(1, s[i])) * stoi(string(1, s[i + 1]));
    }
  }

  for (int length = 2; length <= n; length++)
  {
    for (int i = 0; i <= n - length; ++i)
    {
      int j = i + length - 1;
      for (int k = i + 1; k < j; ++k)
      {
        int leftVal = dp[i][k - 1];
        int rightVal = dp[k][j];

        // Handle leading/trailing zeros for multiplication
        if (s[i] == '0' && k > i + 1)
        {
          leftVal = 0;
        }
        if (s[j] == '0' && k < j)
        {
          rightVal = 0;
        }

        // Consider both multiplication and addition at the split point `k`
        dp[i][j] = min(dp[i][j], leftVal * rightVal + stoi(string(1, s[i])) + stoi(string(1, s[j])),
                       leftVal + rightVal);
      }
    }
  }

  return dp[0][n - 1];
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    string s;
    cin >> n >> s;

    int result = minResult(s);
    cout << result << endl;
  }

  return 0;
}
