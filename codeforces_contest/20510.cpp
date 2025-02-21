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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> arr2(n);

    ll ans = 0;
    for (ll i = 0; i < n; i++)
      cin >> arr[i];
    for (ll i = 0; i < n; i++)
      cin >> arr2[i];

    bool flag = false;
    for (ll i = 0; i < n - 1; i++)
    {
      if (arr2[i + 1] < arr[i])
      {
        ans += arr[i];
        ans -= arr2[i + 1];
      }
    }
    ans += arr[n - 1];
    cout << ans << endl;
  }

  return 0;
}