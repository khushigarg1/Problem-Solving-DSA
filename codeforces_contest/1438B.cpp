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
    bool flag = false;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
      if (itr->second > 1)
      {
        flag = true;
      }
    }
    cout << (flag ? "YES" : "NO") << endl;
  }

  return 0;
}