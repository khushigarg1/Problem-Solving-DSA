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
    ll ans = 0;
    for (ll i = 1;; i++)
    {
      if (n % i != 0)
      {
        ans = i - 1;
        break;
      }
    }
    cout << ans << endl;
  }

  return 0;
}