#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ll n, m;
  cin >> n >> m;

  vector<vector<char>> arr(n, vector<char>(n));
  vector<vector<ll>> prefsum(n, vector<ll>(n));
  for (ll i = 0; i < n; i++)
  {
    for (ll j = 0; j < n; j++)
    {
      cin >> arr[i][j];
      int n = arr[i][j] == '.' ? 0 : 1;

      prefsum[i][j] = n;
      if (j > 0)
        prefsum[i][j] += prefsum[i][j - 1];
      if (i > 0)
        prefsum[i][j] += prefsum[i - 1][j];
      if (i > 0 && j > 0)
        prefsum[i][j] -= prefsum[i - 1][j - 1];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << prefsum[i][j] << " ";
    }
    cout << endl;
  }

  for (ll i = 0; i < m; i++)
  {
    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    l1--;
    r1--;
    l2--;
    r2--;
    ll ans = prefsum[l2][r2];

    if (l1 > 0)
      ans -= prefsum[l1 - 1][r2];
    if (r1 > 0)
      ans -= prefsum[l2][r1 - 1];
    if (l1 > 0 && r1 > 0)
      ans += prefsum[l1 - 1][r1 - 1];

    cout << ans << endl;
  }
}
