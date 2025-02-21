#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ll n;
  cin >> n;
  ll cnt = 0;
  for (ll i = 0; i < 32; i++)
  {
    if (((1 << i) & n) > 0)
    {
      cnt++;
    }
  }
  cout << cnt << endl;
}