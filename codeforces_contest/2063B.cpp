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
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> arr(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      mp[arr[i]]++;
    }
    // sort(arr.begin(), arr.end());
    ll len = r - l + 1;
    ll sum = 0;
    for (auto it : mp)
    {
      if (len <= 0)
        break;
      else
      {
        int val = min(it.second, len);
        sum += (val * it.first);
        len -= val;
      }
    }
    // for (ll i = 0; i < len; i++)
    // {
    //   sum += arr[i];
    // }
    cout << sum << endl;
  }

  return 0;
}