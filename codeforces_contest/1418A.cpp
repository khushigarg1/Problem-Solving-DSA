// 1 for x stick
// y for 1 coal

// x y k
// 2 1 5

// 5 stick and 5 coal
// for 5 coal :- y*k= stick
// total stick needed = y*k + k;
// 10
// 1 = x
// 5 5/x=3

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
    ll x, y, k;
    cin >> x >> y >> k;
    // ll totalsticks = y * k + k - 1;
    // // cout << finstickforcoal << "stick for getting k coals" << totalsticks << endl;
    // ll ans = ceil(totalsticks / (x - 1)) + k;
    // cout << ans << endl;

    long double sticks = y * k + (k - 1);
    ll ans = ceil(sticks / (x - 1)) + k;
    cout << ans << endl;
  }

  return 0;
}