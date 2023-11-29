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
        n = n + 1;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (v[0] == 0)
        {
            cout << "0 0 0" << endl;
            // break;
        }
        if (v[0] & 1 == 1)
        {
            int mid = 1, mf = 1;
            int left = v[0] / 2;
            int right = v[0] / 2;
            while (mf)
            {
                if (left == 0)
                {
                    mid++;
                    left = v[0] / 2 - 1;
                    right = v[0] / 2;
                    mf -= 1;
                }
                if ((left ^ 1) + (mid ^ 1) + (right ^ 1) == v[1])
                {
                    cout << left << " " << mid << " " << right << endl;
                    break;
                }
                if ((left ^ 1) + (mid ^ 1) + (right ^ 1) > v[1])
                {
                    right++;
                    left--;
                }
            }
        }
        else
        {
            int mid = 0, mf = 1;
            int left = v[0] / 2;
            int right = v[0] / 2;
            while (mf)
            {
                if (left == 0)
                {
                    mid++;
                    left = v[0] / 2 - 1;
                    right = v[0] / 2;
                    mf -= 1;
                }
                if ((left ^ 1) + (mid ^ 1) + (right ^ 1) == v[1])
                {
                    cout << left << " " << mid << " " << right << endl;
                    break;
                }
                if ((left ^ 1) + (mid ^ 1) + (right ^ 1) > v[1])
                {
                    right++;
                    left--;
                }
            }
        }
    }
}
