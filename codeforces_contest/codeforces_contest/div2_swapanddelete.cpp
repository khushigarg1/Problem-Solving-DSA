#include <bits/stdc++.h>
using namespace std;

int minCost(string s)
{
    int i = 0;
    int count = 0;
    while (s[i] == '1')
    {
        count++;
        i++;
    }
    string str = s.substr(i, s.length() - i);
    if (stoi(str) == 0)
    {
        return count;
    }
    int count0 = 0, count1 = 0;
    for (int j = i; j < s.length(); j++)
    {
        if (s[j] == '1')
        {
            count1++;
        }
        else
        {
            count0++;
        }
    }

    int ans = count + (abs(count1 - count0));
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int result = minCost(s);
        cout << result << endl;
    }

    return 0;
}