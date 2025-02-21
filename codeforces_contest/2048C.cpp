#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const size_t STRING_MAX = 1000000;

std::string maxString(size_t length)
{
  return std::string(length, '\xFF');
}

ll getXOR(string a, string b, ll num)
{
  ll i = 0;
  ll count = 0;
  // bool isequal = (a.length() - num + 1) == b.length();
  while (num < a.length() && i < b.length())
  {
    // cout << a[num] << " " << b[i] << endl;
    if ((a[num] == '1' && b[i] == '0') || (a[num] == '0' && b[i] == '1'))
    {
      count++;
      num++;
      i++;
    }
    else
    {
      break;
    }
  }
  return count;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int l1, r1, l2, r2;
    l1 = 1;
    r1 = s.length();
    int n = s.length();
    int tempzero = -1;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '0')
      {
        tempzero = i + 1;
        break;
      }
    }
    if (tempzero == -1)
    {
      cout << l1 << " " << r1 << " " << s.length() << " " << s.length() << endl;
    }
    else
    {
      ll maxx = INT_MIN;
      int size = n - tempzero + 1;
      for (int i = 0; i <= s.length() - size; i++)
      {
        // ll maxxx1 = getXOR(s, s.substr(0, n - tempzero + 1), tempzero - 1);
        // ll maxxx2 = getXOR(s, s.substr(tempzero - 1, n), tempzero - 1);

        // cout << maxxx1 << " " << maxxx2 << tempzero << " " << endl
        //      << endl;
        // if (maxxx1 > maxxx2)
        // {
        //   l2 = 1;
        //   r2 = n - tempzero + 1;
        // }
        // else
        // {
        //   l2 = tempzero;
        //   r2 = n;
        // }
        // cout << l1 << " " << r1 << " " << l2 << " " << r2 << endl;
        string temps = s.substr(i, size);
        // bool isequal = (s.length() - tempzero) == temps.length();
        // ll counttt = 0;
        // if (isequal)
        ll counttt = getXOR(s, temps, tempzero - 1);
        // cout << temps << " " << size << " " << tempzero << " " << counttt << " " << maxx << endl;
        if (maxx <= counttt)
        {
          maxx = counttt;
          l2 = i + 1;
          r2 = i + size;
        }
      }
      cout << l1 << " " << r1 << " " << l2 << " " << r2 << endl;
    }
  }

  return 0;
}