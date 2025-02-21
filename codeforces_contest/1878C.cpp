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
    ll n, k, x;
    cin >> n >> k >> x;

    ll minnsum = (k * (k + 1)) / 2;
    ll maxxsum = ((n * (n + 1)) / 2) - (((n - k) * (n - k + 1)) / 2);

    if (x >= minnsum && x <= maxxsum)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}