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
    ll n, a, b;
    cin >> n >> a >> b;

    if (n <= 2)
    {
      cout << "NO" << endl;
    }
    else
    {
      int diff = abs(a - b);
      if (diff % 2 != 0)
      {
        cout << "NO" << endl;
      }
      else
      {
        cout << "YES" << endl;
      }
    }
  }

  return 0;
}