#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int points[3] = {x1, x2, x3};
    sort(points, points + 3);
    int median = points[1];
    int total = abs(points[0] - median) + abs(points[1] - median) + abs(points[2] - median);
    cout << total << endl;
  }
  return 0;
}