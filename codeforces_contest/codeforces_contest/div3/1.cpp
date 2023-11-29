#include <bits/stdc++.h>
using namespace std;

bool isSubstring(string s1, string s2)
{
    int index = s2.find(s1);
    return (index != string::npos) ? true : false;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;
        string temp = x;
        int count = 0;
        bool flag = true;
        while (flag)
        {
            temp += x;
            // cout << temp << temp.find(s);
            count++;
            if (isSubstring(s, temp))
            {
                flag = false;
            }
        }
        cout << (flag ? -1 : count) << endl;
    }
    return 0;
}
