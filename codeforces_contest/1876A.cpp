#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    ll minn = k;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
      minn = min(b[i], minn);
      v.push_back(make_pair(b[i], a[i]));
    }

    ll temp = n - 1;
    sort(v.begin(), v.end());
    ll count = k;
    for (auto it : v)
    {
      if (temp <= 0 || it.first >= k)
      {
        break;
      }
      ll cnt = temp >= it.second ? it.second : temp;
      count += (it.first * cnt);
      temp -= cnt;
    }
    count += temp * k;
    cout << count << endl;
  }

  return 0;
}