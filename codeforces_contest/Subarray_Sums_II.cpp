/*
2 1 4 9 7
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ll n, x;
  cin >> n >> x;
  vector<ll> arr(n);
  for (auto &it : arr)
    cin >> it;

  map<ll, ll> mp;
  ll ans = 0;
  ll sum = 0;
  mp[0] = 1;

  for (ll i = 0; i < n; i++)
  {
    sum += arr[i];
    // cout << mp[sum - x] << " " << sum - x << endl;
    ans += mp[sum - x];
    mp[sum]++;
  }
  // for (auto it : mp)
  // {
  //   cout << it.first << " " << it.second << endl;
  // }
  cout << ans;
}