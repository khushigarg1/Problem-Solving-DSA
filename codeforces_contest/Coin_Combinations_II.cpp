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

  for (int i = 0; i < n; i++)
  {
    for (int j = arr[i]; j <= k; j++)
    {
      dp[j] = (dp[j] + dp[j - arr[i]]) % MOD;
    }
  }

  cout << dp[k] << endl;
  return 0;
}
