// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define MOD 1000000007

// int main()
// {
//   ll n, m;
//   cin >> n >> m;
//   vector<ll> arr(n);
//   for (ll i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }

//   vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, 0));
//   for (ll i = 1; i <= n; i++)
//   {
//     if (arr[i - 1] != 0)
//       dp[i][arr[i - 1]] = 1;
//   }

//   // for (ll i = 0; i <= n; i++)
//   // {
//   //   for (ll j = 0; j <= m; j++)
//   //   {
//   //     cout << dp[i][j] << " ";
//   //   }
//   //   cout << endl;
//   // }

//   // 0 : 3 -> 0 0 0 0
//   // 1 : 0 -> 0 0 0 1
//   // 2 : 0 -> 0 0 1 1
//   // 3 : 3 -> 0 0 2 2
//   // 4 : 0 -> 0 0 0 1
//   // 5 : 0 -> 0 0 1 1
//   // 6 : 0 -> 0 1 2 2
//   // 7 : 0 -> 0 3 5 4
//   // 8 : 2 -> 0 8 12 9
//   // 9 : 0 -> 0 0 1 0
//   for (ll i = 1; i <= n; i++)
//   {
//     for (ll j = 1; j <= m; j++)
//     {
//       if (arr[i - 1] == 0)
//       {
//         if (i == n || arr[i] == 0)
//         {
//           if (i == 1)
//             dp[i][j] = 1;
//           else
//           {
//             // cout << i << " : " << j << " : " << arr[i] << " -> " << dp[i - 1][j - 1] << " " << dp[i - 1][j] << " " << dp[i - 1][j + 1] << endl;
//             dp[i][j] = (dp[i][j] + (dp[i - 1][j - 1] + dp[i - 1][j] + ((j + 1 <= m) ? dp[i - 1][j + 1] : 0))) % MOD;
//           }
//         }
//         else if (arr[i] != 0)
//         {
//           // cout << "asds" << i << endl;
//           // dp[i-1][j-1] * dp[i+1][j-1]
//           // dp[i-1][j-1] * dp[i+1][j]
//           // dp[i-1][j-1] * dp[i+1][j+1]
//           // dp[i-1][j] * dp[i+1][j-1]
//           // dp[i-1][j] * dp[i+1][j]
//           // dp[i-1][j] * dp[i+1][j+1]
//           // dp[i-1][j+1] * dp[i+1][j-1]
//           // dp[i-1][j+1] * dp[i+1][j]
//           // dp[i-1][j+1] * dp[i+1][j+1]

//           for (ll k = j - 1; k < j + 2; k++)
//           {
//             for (ll l = j - 1; l < j + 2; l++)
//             {
//               // cout << i << "," << j << ":::" << k << "-> " << l << "? " << (dp[i - 1][k] * dp[i + 1][l]) << endl;
//               if (l <= m && k <= m && k != 0 && l != 0 && (i + 1 <= n) && (i - 1 >= 1))
//                 dp[i][j] = (dp[i][j] + (dp[i - 1][k] * dp[i + 1][l])) % MOD;
//             }
//             // cout << endl;
//           }
//         }
//       }
//       // cout << dp[i][j] << ": " << arr[i - 1] << ":- " << i << ", " << j << endl
//       // << endl;
//     }
//     // cout << endl;
//   }
//   cout << "asdf" << endl;
//   for (ll i = 1; i <= n; i++)
//   {
//     cout << i << " : " << arr[i] << " -> ";
//     for (ll j = 1; j <= m; j++)
//     {
//       cout << dp[i][j] << " ";
//     }
//     cout << endl;
//   }

//   ll ans = 1;
//   for (ll i = 1; i <= n; i++)
//   {
//     ll summ = 0;
//     for (ll j = 1; j <= m; j++)
//     {
//       if (arr[i - 1] == 0)
//       {
//         summ += (dp[i][j] % MOD);
//       }
//     }
//     // cout << summ << endl;
//     ans *= (summ == 0 ? 1 : summ);
//   }
//   cout << ans << endl;
// }
// // 1 2 3 4 5 6 7 8 9 10 11
// // 3 0 0 3 0 0 0 0 2 0

// // 0  1  2  3
// // 1  0  0  1   -> 3
// // 2  0  1  1   -> 0 -> 2
// // 3  0  2  2   -> 0 -> 4
// // 4  0  0  1   -> 3
// // 5  0  1  1   -> 0 -> 2
// // 6  1  2  2   -> 0 -> 5
// // 7  3  5  4   -> 0 -> 12
// // 8  8  12 9   -> 0 -> 29
// // 9  0  1  0   -> 2
// // 9  1  1  1   -> 0 -> 3

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ll n, k;
  cin >> n >> k;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));
  for (ll i = 1; i <= k; i++)
  {
    if (arr[0] == i || arr[0] == 0)
      dp[1][i] = 1;
  }
  // state:- number of prefixes till index i when last ellkement is k
  for (ll i = 2; i <= n; i++)
  {
    for (ll j = 1; j <= k; j++)
    {
      if (arr[i - 1] != 0 && arr[i - 1] != j)
      {
        dp[i][j] = 0;
      }
      else
      {
        for (ll prev = j - 1; prev < j + 2; prev++)
        {
          if (prev >= 1 && prev <= k)
            dp[i][j] = (dp[i][j] + dp[i - 1][prev]) % MOD;
        }
      }
    }
  }
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= k; j++)
  //   {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  ll ans = 0;
  for (ll i = 1; i <= k; i++)
  {
    ans = (ans + dp[n][i]) % MOD;
  }
  cout << ans << endl;
}