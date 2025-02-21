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
    vector<ll> arr(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      x ^= arr[i];
    }

    if (x == 0)
    {
      cout << "YES" << endl;
    }
    else
    {
      ll k = 0;
      // cout << x << endl;
      ll count = 0;
      for (ll i = 0; i < n; i++)
      {
        k ^= arr[i];
        if (k == x)
        {
          // cout << i << ": " << k << " : " << x << endl;
          k = 0;
          count++;
        }
      }
      if (k == 0 && count > 2 && count % 2 != 0)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}