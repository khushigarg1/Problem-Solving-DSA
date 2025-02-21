#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int counteven = 0;
    int divisiblek = INT_MAX;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      divisiblek = min(divisiblek, (arr[i] % k) == 0 ? (arr[i] % k) : (k - (arr[i] % k)));
      if (arr[i] % 2 == 0 && counteven < 2)
        counteven++;
    }

    int ans = 0;
    if (k == 4)
    {
      if (counteven >= 2 || divisiblek == 0)
      {
        ans = 0;
      }
      else if (counteven == 1)
      {
        ans = 1;
      }
      else
      {
        ans = divisiblek < 2 ? divisiblek : 2;
      }
    }
    else
      ans = divisiblek;
    cout << ans << endl;
  }

  return 0;
}