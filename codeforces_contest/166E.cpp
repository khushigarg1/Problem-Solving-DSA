#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ll n;
  cin >> n;
  vector<vector<ll>> dp(2, vector<ll>(1, 0));
  dp[0][0] = 1;
  dp[1][0] = 0;
  // dp[2][0] = 1;
  // dp[3][0] = 0;

  ll ans = 0;
  for (ll i = 1; i < n; i++)
  {
    // cout << dp[0][0] << " " << dp[1][0] << endl;
    ans = (dp[0][0] * 3) % MOD;
    dp[0][0] = (dp[1][0] + (dp[0][0] * 2)) % MOD;
    dp[1][0] = ans;
    // for (ll j = 0; j < 4; j++)
    // {
    //   for (ll k = 0; k < 4; k++)
    //   {
    //     if (j != k)
    //     {
    //       // cout << j << "," << i << ": " << dp[j][i] << " " << dp[k][i - 1] << "-> " << k << endl;
    //       dp[j][i] = (dp[j][i] + dp[k][i - 1]) % MOD;
    //     }
    //   }
    // }
  }
  // for (ll i = 0; i < 4; i++)
  // {
  //   for (ll j = 0; j <= n; j++)
  //   {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  cout << ans % MOD << endl;

  return 0;
}