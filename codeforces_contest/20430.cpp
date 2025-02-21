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

    ll count = 1;
    while (n > 3)
    {
      n = n / 4;
      count *= 2;
    }
    // cout << (n % 4 == 0 ? n / 4 : ((n / 4) + 1)) << endl;
    cout << count << endl;
  }

  return 0;
}
