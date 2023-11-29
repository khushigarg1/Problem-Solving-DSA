// in an rotated sorted array there is some elements and all are duplicates but one of them are single and you have to find this single element

#include <bits/stdc++.h>
using namespace std;

int findsingle(int n, vector<int> &v)
{
    int ans = -1;
    if (n == 1)
    {
        return v[0];
    }
    if (v[1] != v[0])
    {
        return v[0];
    }
    if (v[n - 1] != v[n - 2])
    {
        return v[n - 1];
    }
    int l = 1, h = n - 2;
    // int ans = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (v[mid - 1] != v[mid] && v[mid + 1] != v[mid])
        {
            ans = v[mid];
            return v[mid];
        }
        if (v[mid + 1] == v[mid] || ((l + 1) % 2 == 0 && (mid + 1) % 2 != 0))
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
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
    int index = findsingle(n, v);
    cout << index;
    return 0;
}