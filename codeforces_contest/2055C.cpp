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
    string s;
    cin >> s;
    vector<vector<ll>> arr(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
      for (ll j = 0; j < m; j++)
      {
        cin >> arr[i][j];
      }
    }

    ll ssize = 0;
    ll ind1 = 0, ind2 = 0;
    while (ssize < s.length())
    {
      if (s[ssize] == 'D')
      {
        ll sum = 0;
        for (ll i = 0; i < m; i++)
        {
          sum += arr[ind1][i];
        }
        arr[ind1][ind2] = (-1) * sum;
        ind1++;
      }
      else
      {
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
          sum += arr[i][ind2];
        }
        arr[ind1][ind2] = (-1) * sum;
        ind2++;
      }
      ssize++;

      // for (ll i = 0; i < n; i++)
      // {
      //   for (ll j = 0; j < m; j++)
      //   {
      //     cout << arr[i][j] << " ";
      //   }
      //   cout << endl;
      // }
      // cout << "dd" << ind1 << " " << ind2 << ":" << ssize << endl
      //      << endl;
    }

    if (s[ssize] == 'D')
    {
      ll sum = 0;
      for (ll i = 0; i < m; i++)
      {
        sum += arr[ind1][i];
      }
      arr[ind1][ind2] = (-1) * sum;
      ind1++;
    }
    else
    {
      ll sum = 0;
      for (ll i = 0; i < n; i++)
      {
        sum += arr[i][ind2];
      }
      arr[ind1][ind2] = (-1) * sum;
      ind2++;
    }
    for (ll i = 0; i < n; i++)
    {
      for (ll j = 0; j < m; j++)
      {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }
  }

  return 0;
}