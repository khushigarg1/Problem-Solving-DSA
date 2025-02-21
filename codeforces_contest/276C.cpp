#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
bool comp(int a, int b)
{
  return a > b;
}
int main()
{
  ll n, q;
  cin >> n >> q;
  vector<ll> arr(n + 1);
  arr[0] = 0;
  for (ll i = 1; i <= n; i++)
    cin >> arr[i];

  vector<ll> prefix(n + 1, 0);
  for (ll i = 0; i < q; i++)
  {
    ll l, r;
    cin >> l >> r;
    prefix[l]++;
    if (r + 1 <= n)
      prefix[r + 1]--;
  }

  for (ll i = 1; i <= n; i++)
  {
    prefix[i] += prefix[i - 1];
  }

  // for (int i = 0; i <= n; i++)
  // {
  //   cout << prefix[i] << " ";
  // }
  sort(arr.begin(), arr.end());
  sort(prefix.begin(), prefix.end());
  ll sum = 0;
  for (ll i = 0; i <= n; i++)
  {
    sum += (arr[i] * prefix[i]);
  }
  cout << sum << endl;
}