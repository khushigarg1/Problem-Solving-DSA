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
    vector<char> a(n);
    stack<char> s;
    cin >> a[0];
    s.push(a[0]);
    for (int i = 1; i < n; i++)
    {
      cin >> a[i];
      if (s.empty())
      {
        s.push(a[i]);
        continue; // Use continue instead of break
      }
      char ch = s.top();
      if (ch == a[i])
      {
        s.push(a[i]);
      }
      else
      {
        s.pop();
      }
    }
    int cnt = 0;
    while (!s.empty())
    {
      cnt++;
      s.pop();
    }
    cout << cnt << endl;
  }
  return 0;
}
