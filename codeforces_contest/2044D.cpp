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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    unordered_set<int> mp;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (mp.find(a[i]) == mp.end())
      {
        b.push_back(a[i]);
        mp.insert(a[i]);
      }
    }

    for (int i = 1; i <= n; i++)
    {
      if (mp.find(i) == mp.end())
      {
        b.push_back(i);
      }
    }

    for (auto it : b)
    {
      cout << it << " ";
    }
    cout << endl;
  }

  return 0;
}