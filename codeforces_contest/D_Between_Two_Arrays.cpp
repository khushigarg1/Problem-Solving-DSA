#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 998244353

int main()
{
  ll n;
  cin >> n;
  vector<ll> a(n);
  vector<ll> b(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (ll i = 0; i < n; i++)
  {
    cin >> b[i];
  }
  ll num = max(a[n - 1], b[n - 1]);
  vector<ll> dp(num + 1, 0);
  vector<ll> next(num + 1, 0);

  dp[b[n - 1]] = 1;
  for (ll i = b[n - 1] - 1; i >= a[n - 1]; i--)
  {
    dp[i] = (1 + dp[i + 1]) % MOD;
  }

  next = dp;
  for (ll j = n - 2; j >= 0; j--)
  {
    dp[b[j]] = dp[b[j]] == 0 ? dp[a[j + 1]] : dp[b[j]];

    for (ll i = b[j] - 1; i >= a[j]; i--)
    {
      dp[i] = (dp[i] == 0 ? next[a[j + 1]] : dp[i] + dp[i + 1]) % MOD;
    }
    next = dp;
  }
  cout << dp[a[0]] % MOD << endl;
}