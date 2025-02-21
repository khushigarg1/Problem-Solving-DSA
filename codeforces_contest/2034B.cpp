#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;

    int operations = 0;
    int i = 0;

    while (i <= n - m)
    {
      bool weak = true;
      for (int j = i; j < i + m; j++)
      {
        if (s[j] == '1')
        {
          weak = false;
          break;
        }
      }

      if (weak)
      {
        operations++;
        for (int j = i; j < min(i + k, n); j++)
        {
          s[j] = '1';
        }
        i += k;
      }
      else
      {
        i++;
      }
    }

    cout << operations << "\n";
  }

  return 0;
}
