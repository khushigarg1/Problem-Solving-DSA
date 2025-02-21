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
    vector<int> arr(n);
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (k == arr[i])
      {
        flag = true;
      }
    }
    cout << (flag ? "Yes" : "No") << endl;
  }
  return 0;
}
