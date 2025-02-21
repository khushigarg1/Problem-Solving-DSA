#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isFair(ll n)
{
  ll temp = n;
  int flag = true;
  while (temp != 0)
  {
    int dig = temp % 10;
    if (dig != 0 && n % dig != 0)
    {
      return false;
    }
    temp /= 10;
  }
  return flag;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;

    while (!isFair(n))
    {
      n++;
    }
    cout << n << endl;
  }

  return 0;
}