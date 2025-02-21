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
    int n, costp;
    cin >> n >> costp;

    vector<int> a(n);
    vector<int> b(n);
    multimap<int, int> mp;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i] >> b[i];
      mp.insert({b[i], a[i]});
    }

    int count = 0;
    int temp = n;

    for (const auto &pair : mp)
    {
      if (temp <= 0)
        break;

      int person_cost = pair.first;
      int person_qty = pair.second;

      if (temp >= person_qty)
      {
        count += person_cost * person_qty;
        temp -= person_qty;
      }
      else
      {
        count += person_cost * temp;
        temp = 0;
      }
    }

    cout << count << endl;
  }

  return 0;
}
