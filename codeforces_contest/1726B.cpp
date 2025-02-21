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
    ll n, m;
    cin >> n >> m;
    if (m < n)
    {
      cout << "NO" << endl;
    }
    else if (m % 2 != 0)
    {
      if (n % 2 != 0)
      {
        cout << "YES" << endl;
        for (ll i = 0; i < n - 1; i++)
        {
          cout << 1 << " ";
        }
        cout << (m - n + 1) << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
    else
    {
      if (n % 2 == 0)
      {
        cout << "YES" << endl;
        for (ll i = 0; i < n - 2; i++)
        {
          cout << 1 << " ";
        }
        cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << endl;
      }
      else
      {
        cout << "YES" << endl;
        for (ll i = 0; i < n - 1; i++)
        {
          cout << 1 << " ";
        }
        cout << (m - n + 1) << endl;
      }
    }
  }

  return 0;
}