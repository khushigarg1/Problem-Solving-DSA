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
    ll per = 2 * (m * 2);
    ll total = 2 * (m * 2);
    ll diff = 0;

    vector<vector<ll>> v(n, vector<ll>(2, 0));
    cin >> v[0][0] >> v[0][1];
    for (int i = 1; i < n; i++)
    {
      cin >> v[i][0] >> v[i][1];

      total += (per - (2 * ((m - v[i][0]) + (m - v[i][1]))));
    }
    cout << total << endl;
  }

  return 0;
}