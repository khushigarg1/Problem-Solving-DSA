#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  char minchar = 'z';

  for (int i = 1; i < s.length(); i++)
  {
    if (s[i] < s[i - 1])
    {
      cout << "YES" << endl;
      cout << i << " " << i + 1 << endl;
      return 0;
    }
  }
  cout << "NO" << endl;

  return 0;
}