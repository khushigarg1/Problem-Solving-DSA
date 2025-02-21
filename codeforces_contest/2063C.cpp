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
    vector<ll> degree(n + 1, 0);
    vector<vector<ll>> visited(n + 1, vector<ll>(n + 1, 0));
    for (ll i = 0; i < n - 1; ++i)
    {
      ll u, v;
      cin >> u >> v;
      degree[u]++;
      degree[v]++;
      visited[u][v] = 1;
      visited[v][u] = 1;
    }
    // for (ll i = 0; i <= n; i++)
    // {
    //   cout << degree[i] << " ";
    // }
    // cout << endl;

    ll max1 = 0, max2 = 0;
    for (ll i = 1; i <= n; ++i)
    {
      if (degree[i] > max1)
      {
        max1 = i;
      }
    }
    for (ll i = 0; i <= n; i++)
    {
      for (ll j = 0; j <= n; j++)
      {
        if (i == max1 || j == 4)
        {
          degree[i]--;
          degree[j]--;
        }
      }
    }
    for (ll i = 1; i <= n; ++i)
    {
      if (degree[i] >= max2)
      {
        max2 = i;
      }
    }
    // cout << max1 << " " << max2;
    // for (ll i = 0; i <= n; i++)
    // {
    //   for (ll j = 0; j <= n; j++)
    //   {
    //     cout << visited[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    // cout << max1 << " " << max2 << endl;

    ll count = 0;
    for (ll i = 1; i <= n; i++)
    {
      if (i == max1 || i == max2)
      {
        continue;
      }
      ll pairs = 0;
      ll alreadyvis = 0;
      for (ll j = 1; j <= n; j++)
      {
        if (visited[i][j] == 2)
        {
          alreadyvis++;
        }
        if (visited[i][j] == 1 && j != max1 && j != max2)
        {
          // cout << i << j << endl;
          pairs++;
          visited[j][i] = 2;
          visited[i][j] = 2;
        }
      }
      if (alreadyvis > 0 && pairs == 0)
      {
        continue;
      }
      if (pairs > 0)
      {
        count += pairs;
      }
      else
      {
        count++;
      }
    }

    cout << (max2 == 0 ? count - 1 : count) << "\n";
  }

  return 0;
}