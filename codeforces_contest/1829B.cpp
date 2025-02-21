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
    int minn = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] == 1)
      {
        count = 0;
      }
      if (arr[i] == 0)
      {
        count += 1;
        minn = max(minn, count);
      }
    }
    cout << minn << endl;
  }

  return 0;
}
