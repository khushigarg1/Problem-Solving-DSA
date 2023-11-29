/*
smallest index in an array like
1,2,3,4,5,6  and n=4
3 will be ans
arr[ind] >= n
if more elements with sam values then first element index will return
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;

    // cout << "lower bound:-   ";
    // int low = 0, high = n - 1;
    // int ans = n;
    // while (low < high)
    // {
    //     int mid = (low+(high-low)) / 2;
    //     if (v[mid] >= target)
    //     {
    //         high = mid - 1;
    //         ans = mid;
    //     }
    //     else
    //     {
    //         low = mid + 1;
    //     }
    // }
    // cout << ans << endl;

    // cout << "upper bound:-  ";
    // int l = 0, h = n - 1;
    // int uans = n;
    // while (low < high)
    // {
    //     int mid = (l+h) / 2;
    //     if (v[mid] > target)
    //     {
    //         uans = mid;
    //         high = mid - 1;
    //     }
    //     else
    //     {
    //         low = mid + 1;
    //     }
    // }
    // cout << uans;
    // // int ans = find lowerbound(0, n - 1, target, v);
    // // cout << ans;

    // int lb = lower_bound(v.begin(), v.end(), target) - v.begin();
    // cout << lb << endl;
    // int ub = upper_bound(v.begin(), v.end(), target) - v.begin();
    // cout << ub << endl;

    //-----------------------------------------------------search insert position for an array element to maintain sorted order----------------
    // same as a lower bound
    // int low = 0, high = n - 1;
    // int ans = -1;
    // while (low < high)
    // {
    //     int mid = (low + high) / 2;
    //     // if (v[mid] >= target)   //for find floor element
    //     if (v[mid] > target) // to find ceiling element
    //     {
    //         high = mid - 1;
    //         ans = mid;
    //     }
    //     else
    //     {
    //         low = mid + 1;
    //     }
    // }
    // cout << v[ans - 1] << endl;

    // to find floow elements
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] <= target) // to find ceiling element
        {
            ans = v[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}