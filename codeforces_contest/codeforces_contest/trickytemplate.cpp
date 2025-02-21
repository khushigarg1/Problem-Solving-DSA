#include <bits/stdc++.h>
using namespace std;

bool find(string a, string b, string c)
{
  for (int i = 0; i < a.length(); i++)
  {
    if (a[i] == b[i])
    {
      if (c[i] != a[i])
      {
        return true;
      }
    }
    else
    {
      if (c[i] != a[i] || c[i] != b[i])
      {
        return true;
      }
    }
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    if (find(a, b, c))
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}