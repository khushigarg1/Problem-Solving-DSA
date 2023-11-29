#include <bits/stdc++.h>
using namespace std;
int findtargetsum(int n, int target, vector<int> &v)
{
    if (target == 0)
    {
        return 1;
    }
    if (n == 0)
    {
        if (target == v[n])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int nontake = findtargetsum(n - 1, target, v);
    int take = 0;
    if (target >= v[n])
    {
        take = findtargetsum(n - 1, target - v[n], v);
    }
    return nontake + take;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }
    int target;
    cin >> target;
    if (total - target < 0 || (total - target) % 2 != 0)
    {
        cout << "byee";
        return 0;
    }
    int ans = findtargetsum(n - 1, (total - target) / 2, v);
    cout << ans;
    return 0;
}