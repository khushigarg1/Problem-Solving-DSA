#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = 0;
    int diff = d - b;
    count += diff;
    int tempa = a + diff;
    if (tempa < c || b > d)
    {
      cout << -1 << endl;
      continue;
    }
    diff = tempa - c;
    count += diff;
    cout << count << endl;
  }

  return 0;
}
