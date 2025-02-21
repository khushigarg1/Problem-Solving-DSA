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
    string s;
    cin >> s;

    map<char, ll> mp;
    for (ll i = 0; i < s.length(); i++)
    {
      mp[s[i]]++;
    }
    ll oddcnt = 0;
    ll evencnt = 0;
    for (auto it : mp)
    {
      if (it.second % 2 != 0)
      {
        evencnt += (it.second / 2);
        oddcnt++;
      }
      else
      {
        evencnt += it.second;
      }
    }

    if ((oddcnt >= k) && (oddcnt - k > 1))
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
  }

  return 0;
}