#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  int minn = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    minn = min(abs(arr[i]), minn);
  }
  cout << minn << endl;
  return 0;
}
