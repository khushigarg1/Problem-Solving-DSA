#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<char> arr(n);
    vector<ll> perm(n, -1);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] == '.')
        perm[i] = 1;
      else if (arr[i] == 'p')
        perm[i] = 1;
      else if (arr[i] == 's')
      {
            }
    }
  }

  return 0;
}