#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;
    if (n % k || n < k)
    {
      cout << 1 << endl
           << n << endl;
    }
    else
    {
      cout << 2 << endl
           << 1 << " " << n - 1 << endl;
    }
  }

  return 0;
}
