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
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    bool flag = 1;
    for (int i = 1; i < n; i++)
    {
      ll minn = min(arr[i], arr[i - 1]);
      arr[i - 1] -= minn;
      arr[i] -= minn;
    }

    // for (int i = 0; i < n; i++)
    // {
    //   cout << arr[i] << " ";
    // }
    for (int i = 0; i < n - 1; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        flag = 0;
      }
    }
    if (flag)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}