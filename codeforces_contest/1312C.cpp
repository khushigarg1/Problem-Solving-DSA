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
    ll maxxele = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      maxxele = max(maxxele, arr[i]);
    }
    ll maxPower = 1;
    while (maxPower < maxxele)
    {
      maxPower *= k;
    }

    bool ans = true;
    while (maxPower > 0)
    {
      ll cnt = 0;
      for (ll i = 0; i < n; i++)
      {
        if (arr[i] >= maxPower)
        {
          arr[i] -= maxPower;
          cnt++;
        }
      }
      if (cnt > 1)
      {
        ans = false;
        break;
      }
      maxPower /= k;
    }
    if (ans)
    {
      ll maxx = 0;
      for (ll i = 0; i < n; i++)
      {
        maxx = max(maxx, arr[i]);
      }
      if (maxx == 0)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}