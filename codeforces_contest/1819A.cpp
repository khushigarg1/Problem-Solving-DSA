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

    ll mex = 0;
    for (auto it : mp)
    {
      if (mex != it.first)
      {
        break;
      }
      else
      {
        mex++;
      }
    }

    ll mex2 = mex + 1;

    ll l = -1;
    ll r = -1;
    for (ll i = 0; i < n; i++)
    {
      if (mex + 1 == arr[i])
      {
        if (l == -1)
          l = i;
        r = i;
      }
    }

    if (l == -1)
    {
      bool flag = false;
      for (auto it : mp)
      {
        if ((it.first < mex && it.second > 1) || it.first > mex + 1)
        {
          flag = true;
          break;
        }
      }
      cout << (flag ? "Yes" : "No") << endl;
    }
    else
    {
      for (int i = l; i <= r; i++)
      {
        arr[i] = mex;
      }

      map<ll, ll> mp1;
      for (ll i = 0; i < n; i++)
      {
        mp1[arr[i]]++;
      }

      ll newmex = 0;
      for (auto it : mp1)
      {
        if (newmex != it.first)
        {
          break;
        }
        else
        {
          newmex++;
        }
      }

      cout << ((newmex == mex + 1) ? "Yes" : "No") << endl;
    }
  }

  return 0;
}