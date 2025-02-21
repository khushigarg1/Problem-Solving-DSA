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
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    vector<ll> cnt(31, 0);
    for (ll i = 30; i >= 0; i--)
    {
      ll temp = 0;
      for (ll j = 0; j < n; j++)
      {
        if ((arr[j] & (1 << i)) > 0)
        {
          temp++;
        }
      }
      cnt[i] = n - temp;
    }
    ll ans = 0;
    for (ll i = 30; i >= 0; i--)
    {
      if (cnt[i] <= k)
      {
        k -= cnt[i];
        ans |= (1 << i);
      }
    }
    cout << ans << endl;
  }

  return 0;
}