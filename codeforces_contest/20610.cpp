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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll counteven = 0;
    ll countodd = 0;
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] % 2 == 0)
        counteven++;
      else
        countodd++;
    }

    if (counteven == 0)
    {
      cout << countodd - 1 << endl;
    }
    else
    {
      cout << countodd + 1 << endl;
    }
  }

  return 0;
}