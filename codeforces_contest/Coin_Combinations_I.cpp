#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<int> dp(k + 1, 0);
  dp[0] = 1;
  for (int i = 1; i <= k; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arr[j] <= i)
      {
        dp[i] = (dp[i] + dp[i - arr[j]]) % MOD;
      }
    }
  }
  cout << dp[k] << endl;
  return 0;
}
