#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int summ = 0;
  int arr[n];
  vector<int> count(5, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    count[arr[i]]++;
  }
  int taxis = count[4];
  taxis += count[3];
  count[1] = max(0, count[1] - count[3]);
  taxis += (count[2] * 2 + count[1] + 3) / 4;

  cout << taxis << endl;
}