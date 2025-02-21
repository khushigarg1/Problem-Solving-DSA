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
    string a, b;
    cin >> a >> b;
    ll n = a.length();
    ll m = b.length();
    ll ans = 0;

    for (ll len = 1; len <= min(n, m); len++)
    {
      for (ll i = 0; i + len <= n; i++)
      {
        for (ll j = 0; j + len <= m; j++)
        {
          if (a.substr(i, len) == b.substr(j, len))
          {
            ans = max(ans, len);
          }
        }
      }
    }
    cout << a.length() + b.length() - 2 * ans << "\n";
  }

  return 0;
}