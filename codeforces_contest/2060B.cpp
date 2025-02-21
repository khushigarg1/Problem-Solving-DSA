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
    vector<vector<ll>> arr(n, vector<ll>(m, 0));

    for (ll i = 0; i < n; i++)
    {
      for (ll j = 0; j < m; j++)
      {
        cin >> arr[i][j];
      }
      sort(arr[i].begin(), arr[i].end());
    }

    vector<ll> turn(n * m, 0);
    bool flag = 0;
    for (ll i = 0; i < n; i++)
    {
      if (arr[i][0] < n)
        turn[arr[i][0]] = i + 1;
      else
        flag = 1;
    }
    // for (ll i = 0; i < n * m; i++)
    // {
    //   cout << turn[i] << " ";
    // }

    if (flag)
    {
      cout << -1 << endl;
      continue;
    }

    for (ll i = 0; i < n; i++)
    {
      for (ll j = 1; j < m; j++)
      {
        if (arr[i][j - 1] + n != arr[i][j])
        {
          flag = 1;
          break;
        }
      }
      if (flag)
      {
        break;
      }
    }

    if (flag)
    {
      cout << -1 << endl;
      continue;
    }
    else
    {
      for (ll i = 0; i < n * m; i++)
      {
        if (turn[i] != 0)
        {
          cout << turn[i] << " ";
        }
      }
      cout << endl;
    }
  }

  return 0;
}