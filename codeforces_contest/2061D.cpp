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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    vector<ll> b(m);
    map<ll, ll> mp2;
    for (ll i = 0; i < m; i++)
    {
      cin >> b[i];
      mp2[b[i]]++;
    }
    sort(a.begin(), a.end());
    map<ll, ll> mp1;
    for (ll i = 1; i < n; i++)
    {
      if ((a[i] - a[i - 1]) <= 1)
      {
      }
    }
  }

  return 0;
}