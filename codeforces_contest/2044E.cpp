#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> findRoots(ll n, ll end)
{
  vector<ll> roots;
  int temp = n;
  while (temp <= end)
  {
    roots.push_back(temp);
    if (temp > end / n)
      break;
    temp = temp * n;
  }
  return roots;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    long long count = 0;

    vector<ll> roots = findRoots(k, r2);

    ll low = l1, high = r1;
    while (low <= high)
    {
      int mid = (low + high) / 2;
      int countemp = 0;
      int y = mid;
      while (y <= r2)
      {
        if (y >= l2)
          countemp++;
        if (y > r2 / k)
          break;
        y = y * k;
      }
      cout << countemp << " " << low << " " << high << endl;
      if (countemp == roots.size())
        low = mid + 1;
      else
        high = mid - 1;
    }

    cout << roots.size() << low << "he" << endl;
    for (long long x = low; x <= r1; x++)
    {
      long long y = x;
      int countemp = 0;
      while (y <= r2)
      {
        if (y >= l2)
          countemp++;
        if (y > r2 / k)
          break;
        y = y * k;
      }
      if (countemp == 0)
        break;
      else
        count += countemp;
    }
    cout << count + low * roots.size() << endl;
  }
}