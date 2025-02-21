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
    vector<int> arr(n);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      x ^= arr[i];
    }
    if (n % 2 != 0)
    {
      cout << x << endl;
    }
    else
    {
      cout << (x == 0 ? 0 : -1) << endl;
    }
  }

  return 0;
}
