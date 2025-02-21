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
    string n;
    cin >> n;

    int sum = 0, count2 = 0, count3 = 0;

    for (char c : n)
    {
      int digit = c - '0';
      sum += digit;
      if (digit == 2)
        count2++;
      if (digit == 3)
        count3++;
    }

    bool divisible = false;

    for (int i = 0; i <= min(count2, 10); i++)
    {
      for (int j = 0; j <= min(count3, 10); j++)
      {
        if ((sum + i * 2 + j * 6) % 9 == 0)
        {
          divisible = true;
          break;
        }
      }
      if (divisible)
        break;
    }

    if (divisible)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
