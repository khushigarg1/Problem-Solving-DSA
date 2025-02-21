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
  vector<vector<ll>> dp(10, vector<ll>(200000 + 1, 0));
  for (ll i = 0; i <= 200000; i++)
  {
    for (ll j = 0; j <= 9; j++)
    {
      if (i == 0)
      {
        dp[j][i] = 1;
      }
      else
      {
        if (j != 9)
          dp[j][i] = dp[j + 1][i - 1];
        else
          dp[j][i] = (dp[1][i - 1] + dp[0][i - 1]) % MOD;
      }
    }
  }

  while (t--)
  {
    ll n, m;
    cin >> n >> m;

    ll count = 0;
    ll temp = n;
    while (temp != 0)
    {
      ll rem = temp % 10;
      count = (count + dp[rem][m]) % MOD;
      temp /= 10;
    }
    cout << count % MOD << endl;
  }

  return 0;
}