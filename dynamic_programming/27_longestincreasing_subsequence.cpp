#include <bits/stdc++.h>
using namespace std;
int findlongest(int n, int prev_ind, int sizee, vector<int> &v, vector<vector<int>> &dp)
{
    if (n == sizee)
    {
        return 0;
    }
    if (dp[n][prev_ind + 1] != -1)
    {
        return dp[n][prev_ind + 1];
    }
    int len = 0 + findlongest(n + 1, prev_ind, sizee, v, dp); // non-take
    if (prev_ind == -1 || v[n] > v[prev_ind])                 // take
    {
        len = max(len, 1 + findlongest(n + 1, n, sizee, v, dp));
    }
    return dp[n][prev_ind + 1] = len;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    // int ans = findlongest(0, -1, n, v, dp);
    // cout << ans;

    //-------------FINIDNG AND PRITNS LONGEST INCREASING SUBSEQUENCE----------------------
    // vector<int> dp(n + 1, 1);
    // vector<int> hash(n + 1, 0);
    // for (int i = 0; i < n; i++)
    // {
    //     hash[i] = i;
    // }
    // int maxi = 0;
    // int index = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (v[j] < v[i] && 1 + dp[j] > dp[i])
    //         {
    //             dp[i] = 1 + dp[j];
    //             hash[i] = j;
    //         }
    //     }
    //     // maxi = max(maxi, dp[i]);
    //     if (dp[i] > maxi)
    //     {
    //         maxi = dp[i];
    //         index = i;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << dp[i] << "   " << hash[i] << endl;
    // }
    // cout << maxi << " " << index << endl;

    // vector<int> ans;
    // ans.push_back(v[index]);
    // while (hash[index] != index)
    // {
    //     index = hash[index];
    //     ans.push_back(v[index]);
    //     // maxi--;
    // }
    // for (int i = ans.size() - 1; i >= 0; i--)
    // {
    //     cout << ans[i] << " ";
    // }

    //-------------FINIDNG NUMBER OF LONGEST INCREASING SUBSEQUENCES----------------------
    vector<int> dp(n, 1);
    vector<int> count(n, 1);
    int maxx = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[j] < v[i] && dp[i] < 1 + dp[j])
            {
                dp[i] = 1 + dp[j];
                count[i] = count[j];
            }
            else if (v[j] < v[i] && dp[i] == 1 + dp[j])
            {
                count[i] = count[j] + count[i];
            }
        }
        if (dp[i] > maxx)
        {
            maxx = dp[i];
            index = i;
        }
        cout << count[i] << " ";
    }
    cout << endl
         << count[index] << " " << maxx;
    return 0;
}