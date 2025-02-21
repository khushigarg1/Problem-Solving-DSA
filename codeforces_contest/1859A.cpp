#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    int maxx = INT_MIN;
    int minn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      maxx = max(maxx, a[i]);
      minn = min(minn, a[i]);
    }
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
      if (a[i] == minn)
      {
        b.push_back(a[i]);
      }
      else
        c.push_back(a[i]);
    }

    if (b.size() == 0 || c.size() == 0)
    {
      cout << -1 << endl;
      continue;
    }
    cout << b.size() << " " << c.size() << endl;
    for (auto it : b)
      cout << it << " ";
    cout << endl;
    for (auto it : c)
      cout << it << " ";
    cout << endl;
  }

  return 0;
}
