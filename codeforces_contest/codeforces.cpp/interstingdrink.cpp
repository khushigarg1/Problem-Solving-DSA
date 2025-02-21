#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> prices(n);
  for (int i = 0; i < n; i++)
  {
    cin >> prices[i];
  }

  sort(prices.begin(), prices.end());

  int q;
  cin >> q;
  vector<int> qcoins(q);
  for (int i = 0; i < q; i++)
  {
    cin >> qcoins[i];
  }

  for (int i = 0; i < q; i++)
  {
    int maxCoins = qcoins[i];
    auto b = prices.begin();
    auto a = upper_bound(prices.begin(), prices.end(), maxCoins);
    cout << "b points to value: " << *b << endl;
    if (a != prices.end())
    {
      cout << "a points to value: " << *a << endl;
    }
    else
    {
      cout << "a points to end of prices" << endl;
    }
    int affordableShops = upper_bound(prices.begin(), prices.end(), maxCoins) - prices.begin();
    cout << affordableShops << endl;
  }

  return 0;
}