#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int min = INT_MAX;
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < min && min != max)
            {
                min = a[i];
            }
            else if (a[i] > max && min != max)
            {
                max = a[i];
            }
        }
        int cntmin = 0;
        int cntmax = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == min)
            {
                cntmin++;
            }
            if (a[i] == max)
            {
                cntmax++;
            }
        }
        int ans = (cntmax * cntmin) * 2;
        cout << ans << endl;
    }
    return 0;
}
