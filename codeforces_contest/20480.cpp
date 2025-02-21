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
    ll n;
    cin >> n;
    if (n % 33 == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}