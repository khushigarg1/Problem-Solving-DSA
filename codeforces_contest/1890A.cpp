#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> frequency;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      frequency[arr[i]]++;
    }

    if (frequency.size() > 2)
    {
      cout << "NO" << endl;
    }
    else if (frequency.size() == 2)
    {
      auto it = frequency.begin();
      int freq1 = it->second;
      int freq2 = (++it)->second;

      if (abs(freq1 - freq2) <= 1)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
    else
    {
      cout << "YES" << endl;
    }
  }
  return 0;
}
