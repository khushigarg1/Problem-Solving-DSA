/*
partition a set into two subsets with minimum absolute sum difference
:- we find dp in tabulation method with dp[n][target] so what it defines
it tells us is it possible the sum of target value in particular array or not liek imagien i have an array
{1,2,3,4} and traget value is 5
   j  0 1 2 3 4 5
i
0
1
2
3
there will be seomthing soemthing values T or F so if (3,4) is true that means 4 traget si possible in {1,2,3,4}
if 1,2 if it is T then it will show 2 traget sum is possible in {1,2} elements of an array
i show number of elements in an array and j shows target value how much target sum is possible in array
*/

#include <bits/stdc++.h>
using namespace std;
int partitionsubset(int n, int target, vector<int> &v)
{
    vector<vector<bool>> dp(n, vector<bool>(target + 1, 0));
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = true;
    }
    if (v[0] <= target)
        dp[0][v[0]] = true;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= target; j++)
        {
            bool nontake = dp[i - 1][j];
            bool take = false;
            if (j >= v[i])
            {
                take = dp[i - 1][j - v[i]];
            }
            dp[i][j] = take || nontake;
        }
    }
    int minn = 1e9;
    // cout << target << endl;
    for (int i = 0; i <= target; i++)
    {
        // cout << dp[n - 1][i] << " ";
        if (dp[n - 1][i])
        {
            int s1 = i;
            int s2 = target - i;
            int diff = abs(s1 - s2);
            minn = min(minn, diff);
        }
    }
    return minn;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        totalsum += v[i];
    }
    int ans = partitionsubset(n, totalsum, v);
    cout << ans << endl;
    return 0;
}