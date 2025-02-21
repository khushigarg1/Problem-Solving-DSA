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
    int n;
    cin >> n;
    int count = 2;
    int take = 4;
    int temp = n - take;
    if (n == 1)
    {
      count = 1;
    }
    int i = 4;
    while (i < n)
    {
      i = i * 2 + 2;
      count++;
    }
    cout << count << endl;
  }

  return 0;
}