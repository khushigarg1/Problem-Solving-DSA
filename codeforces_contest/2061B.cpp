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
    map<ll, ll> freq;
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      freq[arr[i]]++;
    }
    set<ll> st;
    set<ll> st4;
    vector<ll> temparr;
    for (auto it : freq)
    {
      if (it.second >= 4)
      {
        st4.insert(it.first);
        break;
      }
      else if (it.second >= 2)
      {
        if (it.second == 3)
        {
          temparr.push_back(it.first);
        }
        st.insert(it.first);
      }
      else
      {
        temparr.push_back(it.first);
      }
    }
    vector<ll> ans(4, 0);

    if (st4.size() == 1)
    {
      for (auto i : st4)
      {
        ans[0] = i;
        ans[1] = i;
        ans[2] = i;
        ans[3] = i;
      }
    }
    else if (st.size() >= 2)
    {
      ll i = 0;
      for (auto it : st)
      {
        if (i < 4)
        {
          ans[i] = it;
          ans[i + 1] = it;
        }
        i += 2;
      }
    }
    else
    {
      sort(temparr.begin(), temparr.end());
      for (auto it : st)
      {
        ll twoothersides = it + it;
        ll minnfirst = -1;
        ll minnsecond = -1;
        bool ispossible = false;
        for (ll i = 1; i < temparr.size(); i++)
        {
          if (twoothersides + temparr[i - 1] > temparr[i])
          {
            minnfirst = temparr[i - 1];
            minnsecond = temparr[i];
            ispossible = true;
          }
        }
        if (ispossible)
        {
          ans[0] = it;
          ans[1] = it;
          ans[2] = minnfirst;
          ans[3] = minnsecond;
        }
      }
    }
    if (ans[0] == 0)
    {
      cout << -1 << endl;
    }
    else
    {
      for (auto it : ans)
      {
        cout << it << " ";
      }
      cout << endl;
    }
  }

  return 0;
}