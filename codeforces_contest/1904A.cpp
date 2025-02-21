#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin >> t;
  while (t--)
  {
    ll a, b;
    cin >> a >> b;
    ll xk, yk;
    cin >> xk >> yk;
    ll xq, yq;
    cin >> xq >> yq;

    set<pair<ll, ll>> st1;
    set<pair<ll, ll>> st2;
    for (int i = 0; i < 4; i++)
    {
      st1.insert(make_pair(xk + dx[i] * a, yk + dy[i] * b));
      st2.insert(make_pair(xq + dx[i] * a, yq + dy[i] * b));
      st1.insert(make_pair(xk + dx[i] * b, yk + dy[i] * a));
      st2.insert(make_pair(xq + dx[i] * b, yq + dy[i] * a));
    }
    // for (auto it : st)
    // {
    //   cout << it.first << " " << it.second << endl;
    // }
    // cout << st.size() << endl;
    ll ans = 0;
    for (auto it : st1)
    {
      if (st2.find(it) != st2.end())
        ans++;
    }
    cout << ans << endl;
  }

  return 0;
}