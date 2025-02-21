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
    vector<ll> div;

    for (ll i = n + 1;; i++)
    {
      bool flag = true;
      for (ll j = 2; j * j <= i; j++)
      {
        if (i % j == 0)
        {
          flag = false;
          break;
        }
      }
      if (flag)
      {
        div.push_back(i);
        break;
      }
    }

    for (ll i = div.back() + n;; i++)
    {
      bool flag = true;
      for (ll j = 2; j * j <= i; j++)
      {
        if (i % j == 0)
        {
          flag = false;
          break;
        }
      }
      if (flag)
      {
        div.push_back(i);
        break;
      }
    }

    cout << min(div[0] * div[1], div[0] * div[0] * div[0]) << endl;
  }

  return 0;
}