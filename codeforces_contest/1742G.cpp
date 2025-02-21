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
    vector<ll> visited(n, 0);
    vector<ll> ans;
    ll mask = 0;
    for (ll itr = 30; itr >= 0; itr--)
    {
      ll maxxbit = mask;
      ll index = -1;
      for (ll j = 0; j < n; j++)
      {
        if (!visited[j] && ((arr[j] | mask) > maxxbit))
        {
          maxxbit = (mask | arr[j]);
          index = j;
        }
      }

      if (index == -1)
        break;

      visited[index] = 1;
      ans.push_back(arr[index]);
      mask |= maxxbit;
    }

    for (ll i = 0; i < n; i++)
    {
      if (!visited[i])
      {
        ans.push_back(arr[i]);
      }
    }
    for (auto it : ans)
      cout << it << " ";
    cout << endl;
  }

  return 0;
}