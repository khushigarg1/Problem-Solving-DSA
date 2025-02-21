#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ll n, k, q;
  cin >> n >> k >> q;

  vector<ll> pref(200001, 0);
  for (int i = 1; i <= n; i++)
  {
    ll a, b;
    cin >> a >> b;
    pref[a]++;
    if (b + 1 <= 200000)
      pref[b + 1]--;
  }

  for (int i = 1; i < 200001; i++)
  {
    pref[i] += pref[i - 1];
  }
  // for (int i = 90; i < 101; i++)
  // {
  //   cout << pref[i] << " ";
  // }
  for (int i = 0; i < q; i++)
  {
    ll ans = 0;
    ll a, b;
    cin >> a >> b;
    for (ll i = a; i <= b; i++)
    {
      if (pref[i] >= k)
      {
        ans++;
      }
    }
    cout << ans << endl;
  }
}