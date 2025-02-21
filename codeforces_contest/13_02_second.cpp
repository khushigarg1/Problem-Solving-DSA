#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    long long minn = 0;
    long long maxx = INT_MAX;
    vector<long long> third;
    for (long long i = 0; i < n; i++)
    {
      long long a, x;
      cin >> a >> x;
      if (a == 1)
      {
        minn = max(minn, x);
      }
      else if (a == 2)
      {
        maxx = min(maxx, x);
      }
      else
      {
        third.push_back(x);
      }
    }
    long long count = maxx - minn + 2;
    long long seccount = 0;
    for (auto it : third)
    {
      if (it >= minn && it <= maxx)
      {
        seccount++;
      }
    }
    if (count - seccount <= 0)
    {
      cout << "0" << endl;
    }
    else
    {
      cout << (count - seccount) - 1 << endl;
    }
  }
  return 0;
}
