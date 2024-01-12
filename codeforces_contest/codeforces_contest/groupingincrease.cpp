#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    /* code */
    int n;
    cin >> n;
    vector<long long> v(n);
    long long a = 1e9, b = 1e9, cnt = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      if (a > b)
      {
        swap(a, b);
      }
      if (v[i] <= a)
      {
        a = v[i];
      }
      else if (v[i] <= b)
      {
        b = v[i];
      }
      else
      {
        a = v[i];
        cnt++;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}