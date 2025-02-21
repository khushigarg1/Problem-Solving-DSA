#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  // your code goes here
  ll n, m;
  cin >> n >> m;
  vector<vector<ll>> arr(n + 1, vector<ll>(m + 1, 0));
  vector<vector<ll>> prefix(n + 1, vector<ll>(m + 1, 0));
  for (ll i = 1; i <= n; i++)
  {
    for (ll j = 1; j <= m; j++)
    {
      cin >> arr[i][j];
      prefix[i][j] = arr[i][j] == 1 ? 0 : 1;
      if (i - 1 >= 0)
        prefix[i][j] += prefix[i - 1][j];
      if (j - 1 >= 0)
        prefix[i][j] += prefix[i][j - 1];
      if (i - 1 >= 0 && j - 1 >= 0)
        prefix[i][j] -= prefix[i - 1][j - 1];
    }
  }
  ll q;
  cin >> q;
  for (ll i = 0; i < q; i++)
  {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll count = prefix[c][d];
    if ((a - 1) >= 0)
      count -= prefix[a - 1][d];
    if ((b - 1) >= 0)
      count -= prefix[c][b - 1];
    if ((a - 1) >= 0 && (b - 1) >= 0)
      count += prefix[a - 1][b - 1];
    // cout << prefix[c][d] << " " << prefix[a - 1][d] << " " << prefix[c][b - 1] << " " << prefix[a - 1][b - 1] << " " << count << endl;
    cout << (count >= 1 ? 0 : 1) << endl;
  }
}
