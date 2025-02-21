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
    string x, y;
    cin >> x >> y;
    ll count0 = 0;
    for (ll i = y.length() - 1; i >= 0; i--)
    {
      if (y[i] == '1')
      {
        break;
      }
      count0++;
    }
    ll xlen = x.length();
    // cout << count0 << endl;
    ll count1 = 0;
    for (ll i = (xlen - count0 - 1); i >= 0; i--)
    {
      if (x[i] == '1')
        break;
      count1++;
    }
    cout << count1 << endl;
  }

  return 0;
}