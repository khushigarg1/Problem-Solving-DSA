#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    ll i = 0, j = 0;
    ll ans = 0;
    for (ll j = 0; j < n; j++)
    {
      if (arr[j] > q)
      {
        ll length = j - i;
        if (length >= k)
        {
          ll count = (length - k + 1);
          ans += (count * (count + 1)) / 2;
        }
        i = j + 1;
      }
    }
    ll length = n - i;
    if (length >= k)
    {
      ll count = (length - k + 1);
      ans += (count * (count + 1)) / 2;
    }
    cout << ans << endl;
  }

  return 0;
}