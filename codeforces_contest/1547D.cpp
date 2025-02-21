/*
1 = 01
2 = 10
3 = 11
4 = 100
5 = 101
6 = 110
7 = 111
8 = 1000

1 & 2 => 01 & 10 => 0
2 & 4 => 010 & 100 => 000
4 & 8 => 0100 & 1000 => 0000
*/

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
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    vector<ll> ans(n, 0);
    for (ll i = 0; i < 30; i++)
    {
      bool found = 0;
      for (ll j = 0; j < n; j++)
      {
        if ((arr[j] & (1 << i)) && found == 0)
        {
          found = 1;
        }
        else if (found && (arr[j] & (1 << i)) == 0)
          ans[j] += (1 << i);
      }
    }
    for (ll i = 0; i < n; i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
  }

  return 0;
}