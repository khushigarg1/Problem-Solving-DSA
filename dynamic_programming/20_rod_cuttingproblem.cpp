/*
rod cutting problem
imagien you are given an array and rod length
2,5,7,9 10   and rod length =5
you have to cut rod into some peices which will provife max cost
like
2 5 7 9 10  cost if we cut rod into 2 then 5 if in 4 perices then 9 like this you ahve to maximize it
0 1 2 3 4 indexes rod peices
*/

#include <bits/stdc++.h>
using namespace std;

int findmaxval(int ind, vector<int> &v, int N, vector<vector<int>> &dp)
{
    cout << ind << " " << N << endl;
    if (ind == 0)
    {
        return (N * v[0]);
    }
    if (dp[ind][N] != -1)
    {
        return dp[ind][N];
    }
    int nontake = 0 + findmaxval(ind - 1, v, N, dp);
    int take = INT_MIN;
    int rodlength = ind + 1;
    if (rodlength <= N)
    {
        take = v[ind] + findmaxval(ind, v, N - rodlength, dp);
    }
    return dp[ind][N] = max(nontake, take);
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
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    int ans = findmaxval(n - 1, v, n, dp);
    cout << ans;
    return 0;
}