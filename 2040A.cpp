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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    int ans = -1;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
      int count = 0;
      for (int j = 0; j < n; j++)
      {
        if (i != j)
        {
          if (abs(arr[i] - arr[j]) % k == 0)
          {
            break;
          }
          else
          {
            count++;
          }
        }
      }
      if (count == n - 1)
      {
        flag = true;
        ans = i;
        break;
      }
    }

    if (flag)
    {
      cout << "YES" << endl;
      cout << ans + 1 << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}