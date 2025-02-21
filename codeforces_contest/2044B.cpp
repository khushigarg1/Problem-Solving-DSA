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
    string s;
    cin >> s;
    vector<char> ans;
    for (int i = s.length() - 1; i >= 0; i--)
    {
      if (s[i] == 'p')
      {
        ans.push_back('q');
      }
      else if (s[i] == 'q')
      {
        ans.push_back('p');
      }
      else
      {
        ans.push_back('w');
      }
    }
    for (auto it : ans)
    {
      cout << it;
    }
    cout << endl;
  }

  return 0;
}