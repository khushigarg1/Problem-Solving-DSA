/*
i have given an array and k as a variable
we can do partition of array in max k elements and have to find max sum of array partitions
arr = {10, 5, 12, 8, 9} k=2
10,5 = 10*2 = 20
12,8 = 12*2 = 24
9 = 9
final = 20+24+9 = 53
*/
#include <bits/stdc++.h>
using namespace std;

int find(int i, int n, vector<int> &v, int k)
{
    if (i == n)
    {
        return 0;
    }
    int ans = INT_MIN;
    int len = 0;
    int finalans = INT_MIN;
    // for (int j = i; j < n; j++)
    for (int j = i; j < min(i + k, n); j++)
    {
        cout << i << " " << j << " " << len << endl;
        len++;
        ans = max(ans, v[j]);
        int sum = len * ans + find(j + 1, n, v, k);
        finalans = max(sum, finalans);
    }
    return finalans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = find(0, n, v, k);
    cout << ans;
    return 0;
}