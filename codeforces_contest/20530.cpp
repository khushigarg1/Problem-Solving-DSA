#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;

    vector<ll> vec(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> vec[i];
    }

    bool flag = false;

    for (ll i = 0; i < n - 1; i++)
    {
      if ((vec[i] < (vec[i + 1] * 2)) && (vec[i + 1] < (vec[i] * 2)))
        flag = true;
    }

    if (flag == true)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}