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
    int n;
    cin >> n;
    vector<ll> arr(n);
    int numzero = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (i == 0 && arr[i] == 0)
      {
        numzero++;
      }
      if (i >= 1 && arr[i] == 0 && arr[i - 1])
        numzero++;
    }
    // cout << numzero << "ere" << endl;
    if (numzero == 0)
    {
      cout << 1 << endl;
    }
    else if (arr[0] == 0 && arr[n - 1] == 0)
    {
      if (numzero > 2)
      {
        cout << 2 << endl;
      }
      else if (numzero == 1)
      {
        cout << 0 << endl;
      }
      else
      {
        cout << 1 << endl;
      }
    }
    else
    {
      if (numzero == 1 && (arr[n - 1] == 0 && arr[0] != 0 || (arr[0] == 0 && arr[n - 1] != 0)))
      {
        cout << 1 << endl;
      }
      else
      {
        cout << 2 << endl;
      }
    }
    // if (numzero == n)
    // {
    //   cout << 0 << endl;
    // }
    // else if (numzero == 0)
    // {
    //   cout << 1 << endl;
    // }
    // else
    // {
    //   if (arr[0] == 0 && arr[n - 1] == 0)
    //   {
    //     if (numzero == 2 || (arr[1] == 0 && arr[n - 1] == 0 && numzero == 4) || ((arr[1] == 0 || arr[n - 1] == 0) && numzero == 3))
    //     {
    //       cout << 1 << endl;
    //     }
    //     else
    //     {
    //       cout << 2 << endl;
    //     }
    //   }
    //   else if (
    //       ((arr[0] == 0 || arr[n - 1] == 0) && numzero == 1) ||
    //       (arr[0] == 0 && arr[1] == 0 && numzero == 2) ||
    //       (arr[n - 1] == 0 && arr[n - 2] == 0 && numzero == 2))
    //   {
    //     cout << 1 << endl;
    //   }
    //   else
    //   {
    //     cout << 2 << endl;
    //   }
    // }
  }

  return 0;
}