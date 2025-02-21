#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;

    int lcm = (a * b) / __gcd(a, b);
    cout << lcm << endl;
  }

  return 0;
}