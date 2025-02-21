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
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      mp[arr[i]]++;
    }
    ll predict = -1;
    ll ans = 0;
    for (ll k = 1; k <= 1023; k++)
    {
      map<ll, ll> temp;
      for (ll j = 0; j < n; j++)
      {
        temp[arr[j] ^ k]++;
        // cout << k << ": " << arr[j] << " " << temp[arr[j] ^ k] << mp[arr[j] ^ k] << endl;
        if (mp.find(arr[j] ^ k) == mp.end() || (mp.find(arr[j] ^ k) != mp.end() && (temp[arr[j] ^ k] > mp[arr[j] ^ k])))
        {
          // cout << "he" << endl;
          predict = 0;
          break;
        }
      }
      // cout << predict;
      if (predict == -1)
      {
        predict = 1;
        ans = k;
        // cout << ans << k << endl;
        break;
      }
      predict = -1;
    }
    if (predict == -1)
    {
      cout << -1 << endl;
    }
    else
      cout << ans << endl;
  }

  return 0;
}