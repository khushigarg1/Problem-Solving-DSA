#include <bits/stdc++.h>
using namespace std;

bool subsetsum(int n, int target, vector<int> &v)
{
    vector<bool> prev(target + 1, 0);
    vector<bool> curr(target + 1, 0);
    prev[0] = curr[0] = true;
    if (v[0] <= target)
    {
        prev[v[0]] = true;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= target; j++)
        {
            bool nontake = prev[j];
            bool take = false;
            if (j >= v[i])
            {
                take = prev[j - v[i]];
            }
            curr[j] = (take || nontake);
        }
        for (int i = 0; i < target + 1; i++)
        {
            cout << prev[i] << " ";
        }
        cout << endl;
        prev = curr;
    }
    for (int i = 0; i < target + 1; i++)
    {
        cout << prev[i] << " ";
    }
    cout << endl;
    return prev[target];
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
    if (total % 2 != 0)
    {
        cout << "false";
    }
    else
    {
        cout << subsetsum(n, total / 2, v);
    }
    return 0;
}