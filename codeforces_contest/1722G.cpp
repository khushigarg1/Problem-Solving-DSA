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
    if (n == 3)
    {
      cout << 1 << " " << 2 << " " << 3 << endl;
      continue;
    }
    stack<ll> odd;
    stack<ll> even;
    ll f = 2;
    for (ll i = 0; i < n / 2; i++)
    {
      even.push(f);
      odd.push(f + 1);
      f += 2;
    }
    if (n / 2 & 1)
    {
      ll topele = odd.top();
      odd.pop();
      topele ^= 1;

      ll leftshift = 1LL << 20;
      topele ^= leftshift;
      odd.top() ^= leftshift;
      odd.push(topele);
    }
    for (ll i = 1; i <= n; i++)
    {
      if ((n & 1) && i == n)
      {
        cout << 0 << " ";
      }
      else if (i & 1)
      {
        cout << odd.top() << " ";
        odd.pop();
      }
      else
      {
        cout << even.top() << " ";
        even.pop();
      }
    }
    cout << endl;
  }

  return 0;
}