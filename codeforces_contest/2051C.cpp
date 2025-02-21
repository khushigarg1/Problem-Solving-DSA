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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> marr(n);
    vector<ll> karr(n);
    for (ll i = 0; i < m; i++)
    {
      cin >> marr[i];
    }

    vector<ll> ans(m, 0);
    map<ll, int> mp;
    for (ll i = 0; i < k; i++)
    {
      cin >> karr[i];
      mp[karr[i]] = 1;
    }

    if (n - 1 > k)
    {
      for (auto it : ans)
      {
        cout << it;
      }
    }
    else if (n == k)
    {
      for (ll i = 0; i < m; i++)
        cout << 1;
    }
    else
    {
      for (ll i = 0; i < m; i++)
      {
        if (mp.find(marr[i]) == mp.end())
        {
          ans[i] = 1;
        }
      }
      for (auto it : ans)
      {
        cout << it;
      }
    }
    cout << endl;
  }

  return 0;
}