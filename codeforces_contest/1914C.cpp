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

    ll summ = 0, res = 0, sumb = 0;
    for (ll i = 0; i < min(n, k); i++)
    {
      summ += a[i];
      sumb = max(sumb, b[i]);
      res = max(res, summ + (sumb * (k - (i + 1))));
    }
    cout << res << endl;
  }

  return 0;
}