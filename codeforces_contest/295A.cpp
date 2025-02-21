#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ll n, m, k;
  cin >> n >> m >> k;
  vector<ll> arr(n);
  for (auto &it : arr)
    cin >> it;
  vector<ll> temparr(n, 0);

  vector<vector<ll>> vec(m, vector<ll>(3));
  for (ll i = 0; i < m; i++)
  {
    ll x, y, z;
    cin >> x >> y >> z;
    vec[i][0] = x;
    vec[i][1] = y;
    vec[i][2] = z;
  }

  vector<ll> query(m + 2, 0);
  for (ll i = 0; i < k; i++)
  {
    ll x, y;
    cin >> x >> y;
    query[x - 1]++;
    query[y]--;
  }

  for (ll i = 1; i < m; i++)
  {
    query[i] += query[i - 1];
  }

  for (ll j = 0; j < m; j++)
  {
    temparr[vec[j][0] - 1] += query[j] * vec[j][2];
    if (vec[j][1] < n)
      temparr[vec[j][1]] -= query[j] * vec[j][2];
  }

  // vector<ll> temparr(n, 0);
  // for (ll i = 0; i < k; i++)
  // {
  //   for (ll j = query[i][0] - 1; j < query[i][1]; j++)
  //   {
  //     temparr[vec[j][0] - 1] = temparr[vec[j][0] - 1] + vec[j][2];
  //     if (vec[j][1] < n)
  //       temparr[vec[j][1]] = temparr[vec[j][1]] - vec[j][2];
  //   }
  // }

  arr[0] = arr[0] + temparr[0];
  for (ll i = 1; i < n; i++)
  {
    temparr[i] = temparr[i - 1] + temparr[i];
    arr[i] += temparr[i];
  }
  for (auto it : arr)
  {
    cout << it << " ";
  }
  cout << endl;
}
