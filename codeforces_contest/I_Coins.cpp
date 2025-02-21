#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ll n;
  cin >> n;
  vector<float> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<vector<float>> dp(n, vector<float>(n + 1, 0));
  dp[0][0] = 1 - arr[0];
  dp[0][1] = arr[0];

  for (ll i = 1; i < n; i++)
  {
    for (ll j = 0; j <= i + 1; j++)
    {
      if (j == 0)
      {
        dp[i][j] = dp[i - 1][j] * (1 - arr[i]);
      }
      else
      {
        dp[i][j] = dp[i - 1][j] * (1 - arr[i]) + dp[i - 1][j - 1] * arr[i];
      }
    }
  }
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < 4; j++)
  //   {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  long double summ = 0.00;
  for (int i = n / 2 + 1; i <= n; i++)
  {
    summ += dp[n - 1][i];
  }
  cout << fixed << setprecision(10) << summ << endl;
  // return 0;
}