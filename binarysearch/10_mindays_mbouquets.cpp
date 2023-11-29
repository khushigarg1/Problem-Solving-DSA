/*
you are given a array and given non. of bouquets , and adjacent flowers reuired
and every element shows index number flower bloom at element daya
like
arr= {7,7,7,7,13,11,12,7}    n=2(no. of bouquets), k=3(3adjacent floers required to form one bouquets)
find min no. of days to make a bouquets 12
so that
12    * * * * - * * *
*/

#include <bits/stdc++.h>
using namespace std;

int findminday(int n, vector<int> &v, int nob, int k)
{
    auto maxele = max_element(v.begin(), v.end());
    int maxx = *maxele;
    int low = 1, high = maxx;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int temp = 0;
        int count = 0;
        // cout << endl
        //      << endl
        //      << mid << endl;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= mid)
            {
                temp++;
            }
            if (v[i] > mid && temp < k)
            {
                temp = 0;
            }
            if (temp == k)
            {
                temp = 0;
                count++;
                // continue;
            }
            // cout << temp << " " << count << endl;
        }
        if (count >= nob)
        {
            ans = min(ans, mid);
            high = mid - 1;
        }
        else if (count < nob)
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
    int nob, k;
    cin >> nob >> k;

    cout << findminday(n, v, nob, k);

    return 0;
}