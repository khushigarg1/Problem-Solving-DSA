#include <bits/stdc++.h>
using namespace std;
vector<int> max3(const vector<int> &arr)
{
  int max1 = -1, max2 = -1, max3 = -1;

  for (int i = 0; i < arr.size(); i++)
  {
    if (max1 == -1 || arr[i] > arr[max1])
    {
      max3 = max2;
      max2 = max1;
      max1 = i;
    }
    else if (max2 == -1 || arr[i] > arr[max2])
    {
      max3 = max2;
      max2 = i;
    }
    else if (max3 == -1 || arr[i] > arr[max3])
    {
      max3 = i;
    }
  }
  return {max1, max2, max3};
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int days;
    cin >> days;

    vector<int> arr1(days);
    vector<int> arr2(days);
    vector<int> arr3(days);
    for (int i = 0; i < days; i++)
    {
      cin >> arr1[i];
    }
    for (int i = 0; i < days; i++)
    {
      cin >> arr2[i];
    }
    for (int i = 0; i < days; i++)
    {
      cin >> arr3[i];
    }

    int ans = 0;
    for (auto x : max3(arr1))
    {
      for (auto y : max3(arr2))
      {
        for (auto z : max3(arr3))
        {
          if (x != y and x != z and y != z)
            ans = max(ans, arr1[x] + arr2[y] + arr3[z]);
        }
      }
    }
    cout << ans << endl;
  }

  return 0;
}
