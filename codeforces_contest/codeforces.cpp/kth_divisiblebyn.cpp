#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;

    long long int div = k / (n - 1);
    long long int ex = k % (n - 1);
    long long int ans = n * div + ex;
    if (ex == 0)
      ans--;
    cout << ans << endl;
  }
  return 0;
}