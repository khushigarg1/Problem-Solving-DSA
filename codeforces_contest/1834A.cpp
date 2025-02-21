#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr(n);
    int countmin = 0;
    int countpos = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] == -1)
        countmin++;
      else
        countpos++;
    }
    int count = 0;
    while (!((countpos - countmin) >= 0 && countmin % 2 == 0))
    {
      countmin--;
      countpos++;
      count++;
    }
    cout << count << endl;
  }

  return 0;
}
