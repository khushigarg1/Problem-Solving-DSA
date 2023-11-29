/*
    WAYS TO MAKE COIN CHANGE
    GIVEN AN ARRYA LIKE 1,2,3 AND  ATARGET 4
    WE HAVE TO FORM THIS TARGET BUT HERE WE CAN USE ANY ELEMENT ANY NUMBER OF TIMES
    1,1,1,1 =4
    1,1,2 = 4
    2,2 =4
    1,3 =4
    LIKE 4 DIFF WAYS WE CANA CHEIVE TARGET
*/

#include <bits/stdc++.h>
using namespace std;
int findTotalways(int n, vector<int> &v, int target)
{
    if (n == 0)
    {
        return (target % v[0] == 0);
    }
    // if (target < 0)
    // {
    //     return 0;
    // }
    int notinclude = findTotalways(n - 1, v, target);
    int include = 0;
    if (v[n] <= target)
    {
        include = findTotalways(n, v, target - v[n]);
    }
    return include + notinclude;
}
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = findTotalways(n - 1, v, target);
    cout << ans;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
long findTotalways(int n, int *v, int target, vector<vector<long>> &dp)
{
    if (n == 0)
    {
        return (target % v[0] == 0);
    }
    if(dp[n][target] != -1)
    {
        return dp[n][target];
    }
    long notinclude = findTotalways(n - 1, v, target,dp);
    long include = 0;
    if (v[n] <= target)
    {
        include = findTotalways(n, v, target - v[n],dp);
    }
    return dp[n][target] = include + notinclude;
}
long countWaysToMakeChange(int *v, int n, int value)
{
    //Write your code here
    // vector<vector<long>> dp(n, vector<long>(value+1, 0));
    vector<long> prev(value+1,0);
    vector<long> curr(value+1,0);
    // long ans = findTotalways(n - 1, v, value, dp);
    for(int i=0;i<=value;i++)
    {
        // dp[0][i] = (i%v[0]==0);
        prev[i] = i%v[0]==0;
    }
    for(int i =1;i<n;i++)
    {
        for(int j =0;j<=value;j++)
        {

            long notinclude = prev[j];
            long include = 0;
            if (v[i] <= j)
            {
                include = curr[j-v[i]];
            }
            curr[j] = include + notinclude;
        }
        prev =curr;
    }
    // return dp[n-1][value];
    return prev[value];
}
*/