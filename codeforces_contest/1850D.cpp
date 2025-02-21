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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    ll maxcount = 0;
    ll temp = 1;
    for (ll i = 1; i < n; i++)
    {
      if ((arr[i] - arr[i - 1]) <= k)
      {
        temp++;
      }
      else
      {
        maxcount = max(maxcount, temp);
        temp = 1;
      }
    }
    maxcount = max(maxcount, temp);
    // cout << maxcount << endl;
    cout << (n - maxcount) << endl;
  }

  return 0;
}