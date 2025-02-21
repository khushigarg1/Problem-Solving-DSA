// #include <iostream>
// #include <vector>

// using namespace std;

// void insertele(vector<long long> &v, long long sizee, int b)
// {
//   b--;
//   while (b--)
//   {
//     for (long long i = 0; i < sizee; i++)
//     {
//       v.push_back(v[i % v.size()]);
//     }
//   }
// }

// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     long long n, q;
//     cin >> n >> q;

//     vector<long long> v;
//     for (long long i = 0; i < n; i++)
//     {
//       long long a, b;
//       cin >> a >> b;
//       if (a == 1)
//       {
//         v.push_back(b);
//       }
//       else if (a == 2 && !v.empty())
//       {
//         insertele(v, v.size(), b);
//       }
//     }

//     vector<long long> query(q);
//     for (long long i = 0; i < q; i++)
//     {
//       cin >> query[i];
//     }

//     for (long long i = 0; i < q; i++)
//     {
//       cout << v[query[i] - 1] << " ";
//     }
//     cout << endl
//          << endl;
//   }

//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, k, x;
  cin >> n >> k >> x;

  int A[n + 1] = {};
  for (int i = 1; i <= n; i++)
    cin >> A[i];

  sort(A + 1, A + n + 1, greater<int>());

  for (int i = 1; i <= n; i++)
    A[i] += A[i - 1];

  int ans = -1e9;
  for (int i = 0; i <= k; i++)
    ans = max(ans, A[n] - 2 * A[min(i + x, n)] + A[i]);

  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tc;
  cin >> tc;

  while (tc--)
    solve();
}