#include <bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> &v)
{
    // Write your code here
    int ans = -1;
    int n = v.size();
    if (v[0] > v[1])
    {
        return 0;
    }
    if (v[n - 1] > v[n - 2])
    {
        return n - 1;
    }
    int low = 1;
    int high = n - 2;
    while (low <= high)
    {
        /* code */
        int mid = low + (high - low) / 2;

        if (v[mid] > v[mid + 1] && v[mid] > v[mid - 1])
        {
            ans = mid;
            return mid;
        }
        else if (v[mid - 1] < v[mid])
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
    int ans = findPeakElement(v);
    cout << "Peak element is: " << ans << endl;
    return 0;
}