#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

// bool isdivisible(ll last, ll curr)
// {
//   if (
//       (last >= 2 && curr >= 2) && ((last % 2 == 0 && curr % 2 == 0) ||
//                                    (last % 3 == 0 && curr % 3 == 0) ||
//                                    (last % 5 == 0 && curr % 5 == 0) ||
//                                    (last % 7 == 0 && curr % 7 == 0)))
//   {
//     return true;
//   }
//   return false;
// }

bool isdivisible(ll last, ll curr)
{
  return (__gcd(last, curr) > 1);
}
int main()
{
  ll n;
  cin >> n;
  vector<ll> arr(n);
  ll maxele = 0;
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
    maxele = max(maxele, arr[i]);
  }
  vector<ll> dp(maxele + 1, 0);
  vector<ll> dp2(maxele + 1, 0);

  for (ll i = 0; i < n; i++)
  {
    ll curr = arr[i];
    dp[curr] = max(dp[curr], 1LL);

    // for (auto it : dp)
    // {
    //   ll key = it.first;
    //   ll value = it.second;
    //   if (key >= curr)
    //     break;
    //   if (isdivisible(curr, key))
    //   {
    //     dp[curr] = max(dp[curr], value + 1);
    //   }
    // }
  }

  cout << max_len << endl;
  // map<ll, vector<pair<ll, ll>>> mp;
  // mp[arr[0]].push_back(make_pair(arr[0], 1));

  // for (ll i = 1; i < n; i++)
  // {
  //   ll maxsize = 0;
  //   for (auto it : mp[arr[i - 1]])
  //   {
  //     // cout << arr[i] << "heyy" << it.first << " " << it.second << endl;
  //     ll last = it.first;
  //     ll lastvalue = it.second;
  //     maxsize = max(maxsize, lastvalue);
  //     // arr[i] is current value
  //     if (isdivisible(last, arr[i]))
  //       mp[arr[i]].push_back(make_pair(last, lastvalue + 1));
  //     else
  //       mp[arr[i]].push_back(make_pair(last, lastvalue + 1));
  //   }

  //   // cout << endl;
  //   ll last = arr[i - 1];
  //   if (isdivisible(last, arr[i]))
  //   {
  //     mp[arr[i]].push_back(make_pair(arr[i], maxsize + 1));
  //   }
  //   else
  //     mp[arr[i]].push_back(make_pair(arr[i], 1));
  // }
  // ll maxx = 0;
  // for (auto it : mp[arr[n - 1]])
  // {
  //   maxx = max(maxx, it.second);
  // }
  // cout << maxx << endl;
}