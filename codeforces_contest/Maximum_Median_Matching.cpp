#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int ind = n / 2;
        int flag = 0;
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            if (ind == n)
            {
                ind = 0;
            }
            v.push_back(a[j] + b[ind]);
            ind++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}