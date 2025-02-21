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
    ll n, k;
    cin >> n >> k;
    vector<int> arr(n, 0);
    set<ll> st;
    ll j = k;
    int count = 1;

    while (j <= n)
    {
      arr[j - 1] = count;
      j += k;
      st.insert(count);
      count++;
    }

    ll count1 = 1;
    ll i = 0;
    while (i != n)
    {
      if (st.find(count1) == st.end() && arr[i] == 0)
      {
        arr[i] = count1;
        i++;
        count1++;
      }
      else if (arr[i] != 0)
      {
        i++;
      }
      else
      {
        count1++;
      }
    }

    for (auto it : arr)
    {
      cout << it << " ";
    }
    cout << endl;
  }

  return 0;
}