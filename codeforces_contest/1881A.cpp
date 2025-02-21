#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;

    int count = 0;
    string s = s1;

    if (s.find(s2) != string::npos)
    {
      cout << count << endl;
      continue;
    }

    while (s.length() < s2.length())
    {
      s.append(s);
      count++;
    }

    if (s.find(s2) != string::npos)
    {
      cout << count << endl;
    }
    else
    {
      s.append(s);
      count++;

      if (s.find(s2) != string::npos)
        cout << count << endl;
      else
        cout << -1 << endl;
    }
  }
  return 0;
}
