#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int minn = INT_MAX;
    int maxx = INT_MIN;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == 'B')
      {
        minn = min(minn, i);
        maxx = max(maxx, i);
      }
    }
    cout << maxx - minn + 1 << endl;
  }

  return 0;
}