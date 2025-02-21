#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
    vector<vector<ll>> v;
    vector<pair<ll, ll>> vp(n);
    for (ll i = 0; i < n; i++)
    {
      ll k;
      cin >> k;
      vector<ll> temp(k);
      ll min1 = INT_MAX;
      ll min2 = min1;
      for (ll j = 0; j < k; j++)
      {
        cin >> temp[j];

        if (temp[j] < min1)
        {
          min2 = min1;
          min1 = temp[j];
        }
        else if (temp[j] <= min2 && temp[j] >= min1)
        {
          min2 = temp[j];
        }
      }
      vp[i] = make_pair(min2, min1);
      v.push_back(temp);
    }

    sort(vp.begin(), vp.end());
    ll sum = 0;
    ll minn = vp[0].second;
    for (ll i = 1; i < n; i++)
    {
      sum += vp[i].first;
      minn = min(minn, vp[i].second);
    }
    sum += minn;
    cout << sum << endl;
  }

  return 0;
}