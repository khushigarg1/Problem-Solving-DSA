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
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int j = n - 1;
    int count = 0;
    int flag = false;
    while (j >= 0)
    {
      if (count + arr[j] == k)
      {
        cout << 0 << endl;
        flag = true;
        break;
      }
      if (count + arr[j] > k)
      {
        cout << k - count << endl;
        flag = true;
        break;
      }
      count += arr[j];
      j--;
    }
    if (flag == false)
    {
      cout << k - count << endl;
    }
  }

  return 0;
}