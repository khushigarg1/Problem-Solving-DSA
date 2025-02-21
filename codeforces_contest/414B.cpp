#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ll n, k;
  cin >> n >> k;

  vector<vector<ll>> dp(k + 1, vector<ll>(n + 1, 0));
  for (ll i = 1; i <= n; i++)
  {
    dp[0][i] = 1;
  }

  for (ll i = 0; i < k; i++)
  {
    for (ll j = 1; j <= n; j++)
    {
      for (ll it = j; it <= n; it += j)
      {
        cout << i + 1 << " :" << j << ":---" << dp[i + 1][it] << " " << dp[i][j] << " " << it << endl;
        dp[i + 1][it] = (dp[i + 1][it] + dp[i][j]);
      }
    }
    cout << endl;
    for (int dpp = 1; dpp <= n; dpp++)
    {
      cout << dp[i + 1][dpp] << " ";
    }
    cout << endl;
  }
  ll ans = 0;
  for (int i = 1; i <= n; i++)
  {
    ans = (ans + dp[k - 1][i]) % MOD;
  }
  cout << ans << endl;
  return 0;
}