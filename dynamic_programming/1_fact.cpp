#include <bits/stdc++.h>
using namespace std;

int fact(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = fact(n - 1, dp) + fact(n - 2, dp);
}
int main()
{
    int num;
    cin >> num;
    int prev = 0;
    int prev1 = 1;
    int curr = 0;
    for (int i = 2; i <= num + 1; i++)
    {
        curr = prev + prev1;
        prev1 = prev;
        prev = curr;
    }
    cout << "factorial " << curr;
    return 0;
}