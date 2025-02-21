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
    string s;
    cin >> s;

    ll maxcnt = 0;
    ll cnt = 1;
    for (ll i = 1; i < n; i++)
    {
      if (s[i] == s[i - 1])
      {
        cnt++;
      }
      else
      {
        cnt = 1;
      }
      maxcnt = max(maxcnt, cnt);
    }
    cout << maxcnt + 1 << endl;
  }

  return 0;
}