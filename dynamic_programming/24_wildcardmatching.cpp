/*
wildcard matching refers to the matchign fo two string it can include ? and *
if ? then it refers to one hcaracter only
* means it refers to an sequence of hcarcters of 0 length to infinite length
we have to return true if both are matchig return false if not matching
ab?cd
abdcd true

ab*cd
abdefcd true
ab*cd
abdef false
*/

#include <bits/stdc++.h>
using namespace std;
bool findmatching(int n, int m, string &s1, string &s2, vector<vector<int>> &dp)
{
    // cout << n << " " << m << endl;
    if (m < 0 && n < 0)
    {
        return true;
    }
    if (n < 0 && m >= 0)
    {
        return false;
    }
    if (n != 0 && m == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != '*')
            {
                return false;
                break;
            }
        }
        return true;
    }
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }

    if (s1[n] == s2[m] || s1[n] == '?')
    {
        return dp[n][m] = findmatching(n - 1, m - 1, s1, s2, dp);
    }
    else if (s1[n] == '*')
    {
        return dp[n][m] = findmatching(n, m - 1, s1, s2, dp) || findmatching(n - 1, m, s1, s2, dp);
    }
    return dp[n][m] = true;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length(), m = s2.length();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    bool ans = findmatching(n - 1, m - 1, s1, s2, dp);
    cout << ans;
    return 0;
}

// 0 1 2 3 4 5 6 7 b b *c ? c *? 0 1 2 3 4 5 6 7 8 9 b c a c c b a b a a