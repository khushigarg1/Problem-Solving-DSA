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
    ll a, b, n;
    cin >> a >> b >> n;
    ll ans = b;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      ans += (min(a - 1, arr[i]));
    }
    cout << ans << endl;
  }

  return 0;
}