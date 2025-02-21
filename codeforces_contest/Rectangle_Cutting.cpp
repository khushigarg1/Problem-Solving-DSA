#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ll a, b;
  cin >> a >> b;
  ll tempa = a;
  ll tempb = b;
  vector<vector<ll>> dp(501, vector<ll>(501, 0));
  for (ll i = 1; i <= 500; i++)
  {
    dp[1][i] = i - 1;
    // cout << i << endl;
  }
  for (ll i = 1; i <= 500; i++)
  {
    // cout << i << endl;
    dp[i][1] = i - 1;
  }
  for (ll i = 2; i <= 500; i++)
  {
    for (ll j = i; j <= 500; j++)
    {
      cout << "hey" << i << " " << j << endl;
      // if (i == j)
      // {
      //   dp[i][j] = 0;
      // }
      // else
      // {
      //   cout << "byy2" << i << ", " << j << endl;
      //   ll minn = INT_MAX;
      //   for (ll k = (i / 2); k <= i; k++)
      //   {
      //     cout << i << ", " << j << " " << k << ":- " << i - k << " j-k :- " << j - k << endl;
      //     minn = min(minn, (1 + min(((dp[i - k][j] == 0 ? 1 : dp[i - k][j]) + (dp[k][j - k] == 0 ? 1 : dp[k][j - k])),
      //                               ((dp[i - k][k] == 0 ? 1 : dp[i - k][k]) + (dp[i][j - k] ? 1 : dp[i][j - k])))));
      //   }
      //   cout << "minn" << minn << " " << i << ", " << j << endl;
      //   dp[i][j] = minn;
      //   if (j <= a && i <= b)
      //   {
      //     cout << j << " ," << i << "hey " << dp[j][i] << endl;
      //     dp[j][i] = minn;
      //   }
      // }
    }
    // cout << "byy" << i << endl;
  }
  cout << dp[tempa][tempb] << endl;
}