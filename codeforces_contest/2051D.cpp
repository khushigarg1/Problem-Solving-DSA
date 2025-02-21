#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin >> t;
  while (t--)
  {
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> arr(n);
    ll sum = 0;

    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
    }

    sort(arr.begin(), arr.end());
    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
      ll minn = sum - arr[i] - y;
      ll maxx = sum - arr[i] - x;

      ll lower = lower_bound(arr.begin() + i + 1, arr.end(), minn) - arr.begin();
      ll upper = upper_bound(arr.begin() + i + 1, arr.end(), maxx) - arr.begin();

      ans += (upper - lower);
    }

    cout << ans << endl;
  }

  return 0;
}