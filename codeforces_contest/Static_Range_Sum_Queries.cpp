#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ll n, q;
  cin >> n >> q;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (i != 0)
    {
      arr[i] += arr[i - 1];
    }
  }
  // for (auto it : arr)
  // {
  //   cout << it << " ";
  // }
  for (int i = 0; i < q; i++)
  {
    int l, r;
    cin >> l >> r;
    cout << arr[r - 1] - (l - 2 >= 0 ? arr[l - 2] : 0) << endl;
  }
}