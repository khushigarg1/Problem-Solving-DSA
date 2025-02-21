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
    vector<ll> a(n);
    vector<ll> b(n);
    ll count = 0;
    ll need = 0;
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
      cin >> b[i];
      if (count == 1 && (a[i] < b[i]))
      {
        count++;
      }
      if (count == 0 && (a[i] < b[i]))
      {
        need = b[i] - a[i];
        count++;
      }
    }

    if (count >= 2)
    {
      cout << "NO" << endl;
    }
    else
    {
      if (count == 0)
      {
        cout << "YES" << endl;
      }
      else
      {
        bool flag = false;
        for (ll i = 0; i < n; i++)
        {
          if (a[i] >= b[i])
          {
            if (a[i] < b[i] + need)
            {
              flag = true;
              break;
            }
          }
        }
        if (!flag)
        {
          cout << "YES" << endl;
        }
        else
        {
          cout << "NO" << endl;
        }
      }
    }
  }

  return 0;
}