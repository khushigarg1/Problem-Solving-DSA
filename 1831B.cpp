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
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      cin >> b[i];
    }
    vector<int> c;
    int i = 0;
    int j = 0;
    while (i < n && j < n)
    {
      if (a[i] != b[j])
      {
        if (j + 1 < n && (a[i] == b[j + 1]))
        {
          c.push_back(b[j++]);
        }
        else if (i + 1 < n && (b[j] == a[i + 1]))
        {
          c.push_back(a[i++]);
        }
        else
        {
          c.push_back(a[i++]);
        }
      }
      else
      {
        c.push_back(a[i++]);
      }
    }
    for (auto it : c)
    {
      cout << it << " ";
    }
    cout << endl;
  }

  return 0;
}