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
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '(')
        st.push('(');
      else if (!st.empty() && s[i] == ')')
        st.pop();
    }

    int count = 0;
    while (!st.empty())
    {
      st.pop();
      count++;
    }
    cout << count << endl;
  }

  return 0;
}