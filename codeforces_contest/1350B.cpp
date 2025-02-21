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
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    for (ll i = 1; i <= n; i++)
      cin >> arr[i];

    vector<ll> dp(n + 1, 1);
    dp[1] = 1;
    for (ll i = 1; i <= n; i++)
    {
      for (ll j = i * 2; j <= n; j += i)
      {
        if (arr[i] < arr[j])
        {
          dp[j] = max(dp[i] + 1, dp[j]);
        }
      }
    }
    ll maxx = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
      maxx = max(maxx, dp[i]);
    }
    cout << maxx << endl;
  }

  return 0;
}