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
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      mp[arr[i]]++;
    }
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    for (auto it : mp)
    {
      count += 2;
      if (it.second >= 2)
        count2++;
      else
        count1++;
    }

    int ans = 0;
    ans += count2;
    ans += count1;
    ans += count1 % 2;
    cout << ans << endl;
  }

  return 0;
}