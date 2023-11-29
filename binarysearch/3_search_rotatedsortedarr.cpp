#include <bits/stdc++.h>
using namespace std;
int findelement(int n, int target, vector<int> &v)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + (high - low) / 2);
        if (v[mid] == target)
        {
            ans = mid;
            return mid;
        }
        // identify sotred half
        if (v[low] == v[mid] && v[mid] == v[high])
        {
            low = low + 1;
            high = high - 1;
            continue;
        }
        else if (v[low] == v[mid])
        {
            low = low + 1;
            continue;
        }
        else if (v[high] == v[mid])
        {
            high = high - 1;
            continue;
        }
        else if (v[low] < v[mid])
        {
            if (v[low] <= target && target <= v[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (v[mid] <= target && target <= v[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return ans;
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
    int ans = findelement(n, target, v);
    cout << ans << endl;

    return 0;
}