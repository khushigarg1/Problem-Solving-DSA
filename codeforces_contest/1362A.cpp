#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    ll n, k;
    cin >> n >> k;
    ll ans = -1;
    if (n == k)
    {
      ans = 0;
    }
    else
    {
      ll count = 0;
      ll temp = k > n ? k : n;
      ll temp2 = k == temp ? n : k;

      while (temp > temp2)
      {
        if (temp % 8 == 0 && temp / 8 >= temp2)
        {
          temp = temp / 8;
          count++;
        }
        else if (temp % 4 == 0 && temp / 4 >= temp2)
        {
          temp = temp / 4;
          count++;
        }
        else if (temp % 2 == 0 && temp / 2 >= temp2)
        {
          temp = temp / 2;
          count++;
        }
        else
        {
          break;
        }
      }
      if (temp == temp2)
      {
        ans = count;
      }
    }
    cout << (ans == -1 ? -1 : ans)
         << endl;
  }

  return 0;
}