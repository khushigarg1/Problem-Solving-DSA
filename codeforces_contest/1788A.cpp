#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);

    int total_twos = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] == 2)
        total_twos++;
    }

    int prefix_twos = 0;
    int result = -1;

    for (int k = 0; k < n - 1; k++)
    {
      if (a[k] == 2)
        prefix_twos++;

      if (prefix_twos == total_twos - prefix_twos)
      {
        result = k + 1;
        break;
      }
    }

    cout << result << "\n";
  }

  return 0;
}
