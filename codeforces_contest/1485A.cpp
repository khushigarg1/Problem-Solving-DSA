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
    long long A, B, a, b, res, i, ans;
    cin >> A >> B;
    if (!A)
    {
      cout << 0 << endl;
    }
    else
    {
      res = A + 2;
      for (i = (B == 1 ? 1 : 0); i < res; ++i)
      {
        b = B + i;
        a = A;
        ans = i;
        // cout << ans << " " << i << endl;
        while (a)
        {
          a /= b;
          ++ans;
        }
        if (ans < res)
          res = ans;
      }
      cout << res << endl;
    }
    // ll a, b;
    // cin >> a >> b;
    // ll count = 0;
    // b++;
    // while (a > b)
    // {
    //   if (a % b == 0)
    //   {
    //     count++;
    //     b++;
    //   }
    //   if (a <= b)
    //   {
    //     break;
    //   }
    //   a /= b;
    //   count++;
    // }
    // // cout << a << b << endl;
    // if (a == b)
    // {
    //   count += 2;
    // }
    // else
    // {
    //   count++;
    // }
    // cout << count << endl;
  }

  return 0;
}