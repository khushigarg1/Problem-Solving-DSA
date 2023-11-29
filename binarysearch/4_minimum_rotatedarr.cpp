#include <bits/stdc++.h>
using namespace std;

int findelement(int n, vector<int> &v)
{
    int midd = INT_MAX;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        cout << low << " " << high << ":- " << midd << endl;
        int mid = low + (high - low) / 2;
        if (v[mid] < midd)
        {
            midd = v[mid];
        }
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
            midd = min(midd, v[low]);
            low = mid + 1;
            // if (v[high] > v[mid] && v[high] > v[low])
            // {
            //     high = mid - 1;
            // }
            // else
            // {
            //     low = mid + 1;
            // }
        }
        else
        {
            midd = min(midd, v[mid]);
            high = mid - 1;
            // if (v[low] > v[mid] && v[low] > v[high])
            //     high = mid - 1;
            // else
            //     low = mid + 1;
        }
    }
    return midd;
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
    int ans = findelement(n, v);
    cout << ans << endl;

    return 0;
}