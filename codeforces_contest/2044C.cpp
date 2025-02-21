#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int ans = 0;
    int remseat = 0;
    if (m > a)
    {
      remseat += (m - a);
      ans += a;
    }
    if (m <= a)
      ans += m;
    if (m > b)
    {
      remseat += (m - b);
      ans += b;
    }
    if (m <= b)
    {
      ans += m;
    }
    if (remseat > c)
    {
      ans += c;
    }
    if (remseat <= c)
    {
      ans += remseat;
    }
    cout << ans << endl;
  }

  return 0;
}