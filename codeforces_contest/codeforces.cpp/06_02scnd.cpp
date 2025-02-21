#include <bits/stdc++.h>
using namespace std;

char findCharacterWithCount(const map<char, int> &charCountMap, int targetCount);

string reconstructString(const vector<int> &trace)
{
  int n = trace.size();
  string s = "";
  map<char, int> mp;

  for (int i = 0; i < n; ++i)
  {
    char c;
    if (trace[i] == 0)
    {
      c = 'a' + i;
      mp[c] = 0;
      s += c;
    }
    else
    {
      c = findCharacterWithCount(mp, trace[i] - 1);
      mp[c]++;
      s += c;
    }
  }

  return s;
}

char findCharacterWithCount(const map<char, int> &charCountMap, int targetCount)
{
  for (const auto &entry : charCountMap)
  {
    if (entry.second == targetCount)
    {
      return entry.first;
    }
  }

  return '\0';
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> trace(n);

    for (int i = 0; i < n; ++i)
    {
      cin >> trace[i];
    }

    string reconstructedString = reconstructString(trace);
    cout << reconstructedString << endl;
  }

  return 0;
}
