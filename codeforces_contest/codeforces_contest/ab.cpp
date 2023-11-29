#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int ans;
        ans = int(s[0]) + int(s[2]) - 96;
        cout << ans << endl;
    }

    return 0;
}