#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main()
{
  int n, k;
  cin >> n >> k;
  int minn = INT_MAX;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    minn = min(minn, arr[i]);
  }

  vector<int> dp(k + 1, 1e9);
  dp[0] = 0;

  for (int i = 0; i <= k; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arr[j] <= i)
      {
        dp[i] = min(dp[i], (dp[i - arr[j]] + 1));
      }
    }
  }

  cout << (dp[k] < 1e9 ? dp[k] : -1) << endl;
  return 0;
}