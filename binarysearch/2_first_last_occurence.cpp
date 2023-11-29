#include <bits/stdc++.h>
using namespace std;
// 1,2,3,4,5,5,5,5,6,7
// then 4 and 7 is the first and last occurence respectively
// pair<int, int> firstlast(int n, vector<int> &v, int target)
// {
//     int low = 0, high = n - 1;
//     int ans = n;
//     while (low < high)
//     {
//         int mid = (low + (high - low) / 2);
//         if (v[mid] >= target)
//         {
//             high = mid - 1;
//             ans = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }

//     int l = 0, h = n - 1;
//     int uans = n;
//     while (l <= h)
//     {
//         cout << l << " " << h
//              << " " << uans << endl;
//         int mid = l + (h - l) / 2;
//         if (v[mid] > target)
//         {
//             uans = mid;
//             h = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
//     // cout << ans << uans;
//     pair<int, int> p;
//     if (ans == n || v[ans] != target)
//     {
//         p = make_pair(-1, -1);
//     }
//     else
//     {
//         p = make_pair(ans, uans - 1);
//     }
//     return p;
// }

pair<int, int> firstlast(int n, vector<int> &v, int target)
{
    pair<int, int> p;
    int l = 0, h = n - 1;
    int ans = -1;
    while (l <= h)
    {
        cout << l << " " << h << " " << ans << endl;
        int mid = l + (h - l) / 2;
        if (v[mid] >= target)
        {
            ans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (ans == -1 || v[ans] != target)
    {
        p = make_pair(-1, -1);
        return p;
    }

    cout << ans << endl;

    l = ans, h = n - 1;
    int uans = n;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (v[mid] > target)
        {
            uans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    p = make_pair(ans, uans - 1);
    return p;
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
    pair<int, int> ans = firstlast(n, v, target);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}