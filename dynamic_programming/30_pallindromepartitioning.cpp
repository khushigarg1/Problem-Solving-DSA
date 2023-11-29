/*
front partition
here i have given a string an di hve to find min partitions which will be pallindrome of a subtring
*/
#include <bits/stdc++.h>
using namespace std;
bool isPallindrome(int i, int j, string &s)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int find(int i, int n, string &s)
{
    if (i == n)
    {
        return 0;
    }
    // string temp = "";
    int minnnum = INT_MAX;
    for (int j = i; j < n; j++)
    {
        if (isPallindrome(i, j, s))
        {
            int cost = 1 + find(j + 1, n, s);
            minnnum = min(minnnum, cost);
        }
    }
    return minnnum;
}
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    // vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));
    int ans = find(0, n, s);
    cout << ans;
    return 0;
}