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

  vector<ll> prev(101, 0);
  vector<ll> curr(101, 0);

  prev[0] = 1;
  curr = prev;
  for (ll i = 1; i < 10; i++)
  {
    curr[1] = i;
    for (int j = 1; j <= k; j++)
    {
      curr[j] = prev[i - 1] + curr[j - 1];
    }
    for (ll i = 0; i <= k; i++)
    {
      cout << curr[i] << " " << prev[i] << ": ";
    }
    cout << endl;
    prev = curr;
  }
  ll sum = 0;
  for (ll i = 0; i < n; i++)
  {
    sum += prev[arr[i]];
  }
  cout << sum << endl;
}