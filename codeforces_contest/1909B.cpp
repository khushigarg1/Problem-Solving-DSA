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
    ll count3 = 0;
    ll count2 = 0;
    ll count5 = 0;
    ll count7 = 0;
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] % 2 == 0)
        count2++;
      else if (arr[i] % 3 == 0)
        count3++;
      else if (arr[i] % 5 == 0)
        count5++;
      else if (arr[i] % 7 == 0)
        count7++;
    }
    // cout << count2 << " " << count3 << " " << count5 << " " << count7 << endl;
    if (count2 == 0 && count3 == 0)
    {
      if (count1 == 5)
        cout << 5 << endl;
    }
  }

  return 0;
}