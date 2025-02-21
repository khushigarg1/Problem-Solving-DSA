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
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      mp[arr[i]]++;
    }

    ll score = 0;
    for (ll i = 0; i < n; i++)
    {
      if (mp[arr[i]] > 0 && mp[k - arr[i]] > 0)
      {
        if (arr[i] * 2 != k)
        {
          score++;
          mp[arr[i]]--;
          mp[k - arr[i]]--;
        }
        else
        {
          if (mp[arr[i]] >= 2)
          {
            score++;
            mp[arr[i]]--;
            mp[k - arr[i]]--;
          }
        }
      }
    }
    cout << score << endl;
  }

  return 0;
}