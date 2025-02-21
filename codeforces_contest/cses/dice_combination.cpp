#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main()
{
  int n, sum;
  cin >> n >> sum;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<int> dp(sum + 1, 0);
  dp[0] = 1;
  for (int i = 1; i <= sum; i++)
  {
    for (int k = 0; k < n; k++)
    {
      if (arr[k] <= i)
      {
        dp[i] = (dp[i] + dp[i - arr[k]]) % MOD;
      }
    }
  }
  cout << dp[sum] % MOD << endl;
  return 0;
}