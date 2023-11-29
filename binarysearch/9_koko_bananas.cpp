#include <bits/stdc++.h>
using namespace std;

int findmin(int n, int hr, vector<int> &v)
{
    auto mmax = max_element(v.begin(), v.end());
    int maxx = *mmax;
    int low = 0, high = maxx;
    int ans = INT_MAX;
    // cout << maxx;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int sum = 0;
        for (auto it : v)
        {
            if (it % mid == 0)
            {
                sum += (it / mid);
            }
            else
            {
                sum = sum + (it / mid) + 1;
            }
        }
        // cout << mid << " " << sum << endl;
        if (sum == hr)
        {
            ans = min(ans, mid);
            high = mid - 1;
        }
        else if (sum > hr)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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
    int hr;
    cin >> hr;

    int ans = findmin(n, hr, v);
    cout << ans;
    return 0;
}