#include <bits/stdc++.h>
using namespace std;

// frog jump a frog that can jump 1 or 2 stairs at a time and give arrya which is height or energy of the frog which jumping from one index to another
//  int frogjump(int ind, vector<int> &arr)
//  {
//      if(ind == 0)
//      {
//          return 0;
//      }
//      int left = frogjump(ind-1, arr) + abs(arr[ind] - arr[ind-1]);
//      int right = frogjump(ind -2, arr) + abs(arr[ind] - arr[ind-2]);
//      return min(left, right);
//  }

// above problem with dynamic programming because there is many recursive calls which is happenign many times and w can memorize them with dp array
// will make an dp with size n+1 and -1 value at starting
// with memoization
int frogjump(int ind, vector<int> &arr, vector<int> &dp)
{
    if (ind == 0)
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int left = frogjump(ind - 1, arr, dp) + abs(arr[ind] - arr[ind - 1]);
    int right = INT_MAX;
    if (ind > 1)
    {
        right = frogjump(ind - 2, arr, dp) + abs(arr[ind] - arr[ind - 2]);
    }
    return dp[ind] = min(left, right);
}

// climbing stairs
int countnum(int num)
{
    if (num == 0)
    {
        return 1;
    }
    if (num == 1)
    {
        return 0;
    }
    int left = countnum(num - 1);
    int right = countnum(num - 2);
    return (left + right);
}

int main()
{
    int num;
    cin >> num;
    int ans = countnum(num);
    cout << "counttt" << ans;
    vector<int> height(num);
    for (int i = 0; i < num; i++)
    {
        cin >> height[i];
    }
    // int height = [ 20, 30, 10, 60, 10 ];

    // int n = height.length();
    // vector<int> dp(num + 1, -1);
    // int ans = frogjump(num - 1, height, dp);
    // cout << ans;

    //-------------------------with tabulation---------------------
    vector<int> dp(num, 0);
    // dp[0] = 0;
    int prev = 0;
    int prev2 = 0;
    int curr = 0;
    for (int i = 1; i < num; i++)
    {
        int left = prev + abs(height[i] - height[i - 1]);
        int right = INT_MAX;
        if (i > 1)
            right = prev2 + abs(height[i] - height[i - 2]);
        curr = min(left, right);
        prev2 = prev;
        prev = curr;
        // int left = dp[i - 1] + abs(height[i] - height[i - 1]);
        // int right = dp[i - 2] + abs(height[i] - height[i - 2]);
        // dp[i] = min(left, right);
    }
    cout << curr;
    return 0;
}