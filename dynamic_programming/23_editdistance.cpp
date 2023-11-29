/*
given 2 srings
you have to convert first string into another string (you can do some operations on first string:-
insert
replace
remove
)
can insert any character or can replace or can remove any character in a string
find min operations to convert this into another
because it is always possible to convert one string into another dlete all elmenets and insert character of another string into first

horse ros
replace h to r :- rorse
remove r:- rose
remove e:- ros
3 operations
*/

#include <bits/stdc++.h>
using namespace std;
int findedit(int n, int m, string s1, string s2, vector<vector<int>> &dp)
{
    if (n < 0)
    {
        return m + 1;
    }
    if (m < 0)
    {
        return n + 1;
    }
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    if (s1[n] == s2[m])
    {
        return dp[n][m] = 0 + findedit(n - 1, m - 1, s1, s2, dp);
    }
    int m1 = 1 + findedit(n, m - 1, s1, s2, dp);
    int m2 = 1 + findedit(n - 1, m, s1, s2, dp);
    int m3 = 1 + findedit(n - 1, m - 1, s1, s2, dp);
    return dp[n][m] = min({m1, m2, m3});
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int m = s2.length();
    // vector<vector<int>> dp(n, vector<int>(m, -1));
    // int ans = findedit(n - 1, m - 1, s1, s2, dp);
    // cout << ans;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = i;
    }
    for (int i = 0; i <= m; i++)
    {
        dp[0][i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 0 + dp[i - 1][j - 1];
            }
            else
            {
                int m1 = 1 + dp[i][j - 1];
                int m2 = 1 + dp[i - 1][j];
                int m3 = 1 + dp[i - 1][j - 1];
                dp[i][j] = min({m1, m2, m3});
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            cout << "0"
                 << " ";
        }
        else
            cout << s1[i - 1] << " ";
        for (int j = 0; j <= m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    // return dp[n][m];

    cout << s1 << " " << s1.substr(n - 2, 2);
    return 0;
}