#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
      cout << "YES" << endl;
      cout << n << endl;
      for (int i = 0; i < n; i++)
      {
        cout << 1 << " ";
      }
      cout << endl;
    }
    else
    {
      if (k >= 2 && n % 2 == 0)
      {
        cout << "YES" << endl;
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++)
        {
          cout << 2 << " ";
        }
        cout << endl;
      }
      else if (k >= 3)
      {
        cout << "YES" << endl;
        cout << n / 2 << endl
             << 3 << " ";
        for (int i = 1; i < n / 2; i++)
        {
          cout << 2 << " ";
        }
        cout << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}
