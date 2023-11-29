// longeset common substring length acd ade then 2ad
#include <bits/stdc++.h>
using namespace std;

int findcommon(int sind, int s2ind, string s1, string s2, vector<vector<int>> &dp)
{
    if (sind < 0 || s2ind < 0)
    {
        return 0;
    }
    if (dp[sind][s2ind] != -1)
    {
        return dp[sind][s2ind];
    }
    if (s1[sind] == s2[s2ind])
    {
        return dp[sind][s2ind] = (1 + findcommon(sind - 1, s2ind - 1, s1, s2, dp));
    }
    return dp[sind][s2ind] = max(findcommon(sind - 1, s2ind, s1, s2, dp), findcommon(sind, s2ind - 1, s1, s2, dp));
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    // vector<vector<int>> dp(s1.size(), vector<int>(s2.size(), -1));
    // cout << findcommon(s1.size() - 1, s2.size() - 1, s1, s2, dp);

    vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, 0));
    for (int i = 0; i <= s1.size(); i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= s2.size(); i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= s1.size(); i++)
    {
        for (int j = 1; j <= s2.size(); j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    // cout << dp[s1.size()][s2.size()];

    string ans = "";
    cout << endl;
    for (int i = 0; i <= s1.size(); i++)
    {
        for (int j = 0; j <= s2.size(); j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    int i = s1.size(), j = s2.size();
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            ans += s1[i - 1];
            i--;
            j--;
        }
        else if (dp[i - 1][j] < dp[i][j - 1])
        {
            ans += s2[j - 1];
            j--;
        }
        // {
        //     ans += s1[i];
        //     i--;
        // }
        else
        {
            // if (i > 0)
            // {
            ans += s1[i - 1];
            i--;
            // }
            // else
            // {
            //     ans += s2[j];
            //     j--;
            // }
        }
    }
    while (i > 0)
    {
        ans += s1[i - 1];
        i--;
    }
    while (j > 0)
    {
        ans += s2[j - 1];
        j--;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << " " << ans.length();
    return 0;
}