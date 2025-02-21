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
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> ans(n, 0);
    ans[0] = 0;
    // for (int i = 1; i < n; i++)
    // {
    //   ans[i] = i % 2;
    // }
    // if (n % 2 != 0)
    // {
    //   ans[n - 1] = 2;
    // }
    // x--, y--;
    // if (ans[x] == ans[y])
    // {
    //   ans[x] = 2;
    //   int ind = x - 1 < 0 ? n - 1 : 0;
    //   ans[ind] = ans[ind] == 1 ? 0 : 1;
    // }
    x--, y--;
    for (int i = 0; i < n; ++i)
    {
      ans[(x + i) % n] = i % 2;
    }
    if (n % 2 || (x - y) % 2 == 0)
      ans[x] = 2;

    for (auto x : ans)
    {
      cout << x << ' ';
    }
    cout << endl;
  }

  return 0;
}