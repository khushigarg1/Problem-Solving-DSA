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
    ll l, r;
    cin >> l >> r;
    if (l <= 1 && r <= 1)
    {
      cout << 1 << endl;
    }
    else
      cout << abs(l - r) << endl;
  }

  return 0;
}