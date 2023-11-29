#include <bits/stdc++.h>
using namespace std;

int maxmerit(vector<vector<int>> &arr, int day, int task, vector<vector<int>> &dp)
{
    if (day == 0)
    {
        int maxx = 0;
        for (int i = 0; i < 3; i++)
        {
            if (i != task)
            {
                maxx = max(maxx, arr[0][i]);
            }
        }
        return maxx;
    }
    if (dp[day][task] != -1 && task != 3)
    {
        return dp[day][task];
    }
    int maxx = 0;
    for (int i = 0; i < 3; i++)
    {
        int points = 0;
        cout << "taski:-  " << i << " " << task << " " << day << endl;
        if (i != task)
        {
            points = arr[day][i] + maxmerit(arr, day - 1, i, dp);
            maxx = max(maxx, points);
            cout << maxx << endl;
        }
    }
    return dp[day][task] = maxx;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
        }
    }
    // vector<vector<int>> dp(n, vector<int>(3, -1));
    // int ans = maxmerit(v, (v.size() - 1), 3, dp);
    // cout << ans;

    //------------------TABULATION METHOD-------------------
    // dp[0][0] = max(v[0][1], v[0][2]);
    // dp[0][2] = max(v[0][1], v[0][0]);
    // dp[0][1] = max(v[0][0], v[0][2]);
    // dp[0][3] = max(v[0][1], v[0][0], v[0][2]);
    // for (int day = 1; day < n; day++)
    // {
    //     for (int last = 0; last < 4; last++)
    //     {
    //         dp[day][last] = 0;
    //         for (int i = 0; i < 3; i++)
    //         {
    //             if (i != last)
    //             {
    //                 int points = v[day][i] + dp[day - 1][i];
    //                 dp[day][last] = max(dp[day][last], points);
    //             }
    //         }
    //     }
    // }
    // cout << dp[n - 1][3];

    //-----------------------------SPACE OPTIMIZATION-----------------------------
    vector<int> prev(n, 0);
    prev[0] = max(v[0][1], v[0][2]);
    prev[1] = max(v[0][0], v[0][2]);
    prev[2] = max(v[0][1], v[0][0]);
    prev[3] = max(v[0][1], v[0][0], v[0][2]);

    for (int day = 1; day < n; day++)
    {
        vector<int> temp(n, 0);
        for (int last = 0; last < 4; last++)
        {
            temp[last] = 0;
            for (int i = 0; i < 3; i++)
            {
                if (i != last)
                {
                    int points = v[day][i] + prev[i];
                    temp[last] = max(temp[last], points);
                }
            }
        }
        prev = temp;
    }
    cout << prev[3];
    return 0;
}
