#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long a, b;
    cin >> a >> b;
    long long summ = a + b;
    if (summ % 2 == 0)
    {
      cout << "Bob" << endl;
    }
    else
    {
      cout << "Alice" << endl;
    }
  }

  return 0;
}