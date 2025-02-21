#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;

    ll sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
      ll temp;
      cin >> temp;

      sum += temp;
    }

    cout << -(sum) << endl;
  }
  return 0;
}
