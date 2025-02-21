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
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll sum = a + b + c;
    int rem = n / sum;
    ll ans = (rem * 3);
    n = n % sum;
    if (n != 0)
    {
      if (n > a)
      {
        ans += 2;
      }
      else
      {
        ans++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}