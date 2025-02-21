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
    int mindiff = INT_MAX;
    cin >> a[0];
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
      cin >> a[i];
      int diff = a[i] - a[i - 1];
      if (diff < 0)
      {
        flag = true;
      }
      mindiff = min(mindiff, diff);
    }
    if (flag)
    {
      cout << 0 << endl;
    }
    else
      cout << ((mindiff / 2) + 1) << endl;
  }

  return 0;
}
