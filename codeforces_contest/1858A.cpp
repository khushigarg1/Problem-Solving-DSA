#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if (c % 2 == 0)
    {
      if (a <= b)
        cout << "Second" << endl;
      else
        cout << "First" << endl;
    }
    else
    {
      if (a < b)
        cout << "Second" << endl;
      else
        cout << "First" << endl;
    }
  }

  return 0;
}
