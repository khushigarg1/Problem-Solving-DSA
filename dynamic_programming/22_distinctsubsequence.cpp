// one string how many times can be occur in frist string as a subsequence
// like bbaghag bag
/*
then   b ag
       b    ag
       b a   g
    like this
*/

#include <bits/stdc++.h>
using namespace std;
int finddistinct(int n, int m, string s1, string s2, vector<vector<int>> &dp)
{
    if (m < 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    if (s1[n] == s2[m])
    {
        return dp[n][m] = finddistinct(n - 1, m - 1, s1, s2, dp) + finddistinct(n - 1, m, s1, s2, dp);
    }
    return dp[n][m] = finddistinct(n - 1, m, s1, s2, dp);
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int m = s2.length();

    vector<vector<int>> dp(n, vector<int>(m, -1));
    int ans = finddistinct(n - 1, m - 1, s1, s2, dp);
    cout << ans;
    return 0;
}

/*
vector<double> prev(m+1,0);
    // for(int i=0;i<=m;i++)
    // {
    // 	// dp[i][0] = 1;
    // 	prev[i] =0;
    // }
    prev[0] = 1;
    // curr[0] = 1;
    // for(int i=1;i<=m;i++)
    // {
    // 	dp[0][i] = 0;
    // }
    for(int i =1;i<=n;i++)
    {
        // curr[0] = 1;
        for(int j =m;j>=1;j--)
        {
            if(s1[i-1] == s2[j-1])
            {
                prev[j] = prev[j-1] + prev[j];
            }
                // dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            else
            {
                prev[j] = prev[j];
            }
                // dp[i][j] = dp[i-1][j];
        }
        // prev = curr;
    }
    // int ans = finddistinct(n - 1, m - 1, s1, s2, dp);
    return int(prev[m]);*/