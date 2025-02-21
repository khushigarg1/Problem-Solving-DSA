#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  int oddn = 0, evenn = 0, evenin = 0, oddin = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] % 2 == 0)
    {
      evenn++;
      evenin = i;
    }
    else
    {
      oddn++;
      oddin = i;
    }
  }
  int ans = evenn == 1 ? evenin + 1 : oddin + 1;
  cout << ans << endl;
  return 0;
}