#include <bits/stdc++.h>
using namespace std;

int calculate(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = i; j <)
  }
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      arr[i] = i + 1;
    }
    vector<vector<int>> allperm;
    int k = 0;
    do
    {
      for (int i = 0; i < n; i++)
        allperm[k].push_back(arr[i]);
      cout << endl;
      k++;
    } while (next_permutation(arr, arr + n));
  }

  return 0;
}