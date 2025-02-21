#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin >> t;
  while (t--)
  {
    ll n, k;
    cin >> n >> k;

    vector<vector<ll>> dp(n + 1, vector<ll>((n + 1 / 2) + 1, 0));

    for (ll i = n; i >= 0; i--)
    {
      for (ll j = i; j <= n / 2; j++)
      {
        ll dist = j - i + 1;
        ll m = (i + j) / 2;
        if (dist < k)
        {
          dp[i][j] = 0;
        }
        else
        {
          if (dist % 2 == 0)
          {
            dp[i][j] = (dp[i][m] + dp[m + 1][j]) % MOD;
          }
          else
          {
            if (m > 1)
            {
              dp[i][j] = (dp[i][m - 1] + dp[m + 1][j] + m) % MOD;
            }
            else
            {
              dp[i][j] = (dp[m + 1][j] + m) % MOD;
            }
          }
        }
      }
    }
    cout << dp[1][n] % MOD << endl;
  }

  return 0;
}