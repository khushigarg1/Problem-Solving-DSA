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
    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '0')
        count0++;
      else
        count1++;
    }

    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '0')
      {
        if (count1 == 0)
        {
          break;
        }
        count1--;
      }
      else if (s[i] == '1')
      {
        if (count0 == 0)
        {
          break;
        }
        count0--;
      }
    }
    cout << count0 + count1 << endl;
  }

  return 0;
}