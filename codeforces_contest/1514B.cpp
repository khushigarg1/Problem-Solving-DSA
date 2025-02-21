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
    int cnt = 1;
    for (ll i = 0; i < k; i++)
    {
      cnt = (cnt * n) % MOD;
    }
    cout << cnt << endl;
  }

  return 0;
}