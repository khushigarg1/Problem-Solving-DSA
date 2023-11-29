#include <bits/stdc++.h>
using namespace std;
int mod = 1000000007;
int findans(int i, int j, int istrue, string &exp, vector<vector<vector<int>>> &dp)
{
    if (i > j)
    {
        return 0;
    }
    if (i == j)
    {
        if (istrue)
        {
            return exp[i] == 'T';
        }
        else
        {
            return exp[i] == 'F';
        }
    }
    if (dp[i][j][istrue] != -1)
    {
        return dp[i][j][istrue];
    }

    int ways = 0;
    for (int ind = i + 1; ind <= j - 1; ind += 2)
    {
        int leftt = findans(i, ind - 1, 1, exp, dp);
        int leftf = findans(i, ind - 1, 0, exp, dp);
        int rightt = findans(ind + 1, j, 1, exp, dp);
        int rightf = findans(ind + 1, j, 0, exp, dp);

        if (exp[ind] == '|')
        {
            if (istrue)
            {
                ways = (ways + (leftt * rightf) % mod + (leftf * rightt) % mod + (leftt * rightt) % mod) % mod;
            }
            else
            {
                ways = (ways + (leftf * rightf) % mod) % mod;
            }
        }
        if (exp[ind] == '^')
        {
            if (istrue)
            {
                ways = (ways + (leftt * rightf) % mod + (leftf * rightt) % mod) % mod;
            }
            else
            {
                ways = (ways + (leftf * rightf) % mod + (leftt * rightt) % mod) % mod;
            }
        }
        if (exp[ind] == '&')
        {
            if (istrue)
            {
                ways = (ways + (leftt * rightt) % mod) % mod;
            }
            else
            {
                ways = (ways + (leftt * rightf) % mod + (leftf * rightt) % mod + (leftf * rightf) % mod) % mod;
            }
        }
    }
    return dp[i][j][istrue] = ways;
}
int evaluateExp(string &exp)
{
    // Write your code here.
    int n = exp.length();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2, -1)));
    int ans = findans(0, n - 1, 1, exp, dp);
    return ans;
}
int main()
{
    string s;
    cin >> s;
    int ans = evaluateExp(s);
    cout << ans;
}